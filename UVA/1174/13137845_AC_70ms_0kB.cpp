#include<bits/stdc++.h>
using namespace std;
typedef long long big;
int parent[2010];

class Connection
{
    public:
    int node1; int node2; int cost;
    bool operator <(const Connection obj) const
    {
        return obj.cost > cost;
    }
};

void makeJoin(int root1, int root2);
void initialParent(int vertax);
int Krushkal(vector<Connection>graph);
int getParent(int node);

int main()
{

    int Case; cin>>Case; bool next = false;

    for(int c=1; c<=Case; c++)
    {
        if(next) cout << endl;

        int vertax; int edges;
        cin>>vertax>>edges;

        vector<Connection>graph;
        map<string, int>key;
        int cityIndex = 0;
        Connection temp;

        for(int i=0; i<edges; i++)
        {
            string city1; string city2;
            cin>>city1>>city2>>temp.cost;

            if(key.find(city1)==key.end())
            {
                key[city1] = cityIndex;
                cityIndex++;
            }
            if(key.find(city2)==key.end())
            {
                key[city2] = cityIndex;
                cityIndex++;
            }
            temp.node1 = key[city1];
            temp.node2 = key[city2];

            graph.push_back(temp);
        }

        initialParent(vertax+5);
        sort(graph.begin(),graph.end());
        cout << Krushkal(graph) << endl;
        next = true;
    }
}
int Krushkal(vector<Connection>graph)
{
    big totalCost = 0;
    for(int i=0; i<graph.size(); i++)
    {
        int root1 = getParent(graph[i].node1);
        int root2 = getParent(graph[i].node2);

        if(root1 != root2)
        {
            totalCost+=graph[i].cost;
            makeJoin(root1,root2);
        }
    }
    return totalCost;
}
int getParent(int node)
{
    while(parent[node] != node)
    {
        parent[node] = parent[parent[node]];
        node = parent[node];
    }
    return node;
}
void makeJoin(int root1, int root2)
{
    parent[root1] = parent[root2];
}
void initialParent(int vertax)
{
    for(int i=0; i<=vertax; i++)
        parent[i] = i;
}
