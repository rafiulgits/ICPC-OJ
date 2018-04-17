#include<bits/stdc++.h>
using namespace std;

class Connection
{
    public:
    int node1; int node2; int cost;
    bool operator<(const Connection obj) const
    {
        return obj.cost < cost;
    }
};

int city; int roads;
int parent[220];

void initialParent();
void makeJoin(int root1,int root2);
int getParent(int node);
int Krushkal(vector<Connection>graph,int start,int stop);

int main()
{
    int Case = 1;
    while(cin>>city>>roads)
    {
        if(!city && !roads) break;

        string city1; string city2;
        Connection temp;
        vector<Connection>graph;
        map<string,int>key; int index=0;

        for(int i=0; i<roads; i++)
        {
            cin>>city1>>city2>>temp.cost;

            if(key.find(city1)==key.end())
            {
                key[city1] = index;
                index++;
            }
            if(key.find(city2)==key.end())
            {
                key[city2] = index;
                index++;
            }
            temp.node1 = key[city1];
            temp.node2 = key[city2];

            graph.push_back(temp);
        }
        cin>>city1>>city2;
        int start = key[city1];
        int stop = key[city2];

        sort(graph.begin(), graph.end());
        initialParent();
        printf("Scenario #%d\n%d tons\n",Case,Krushkal(graph,start,stop));
        Case++; cout << endl;
    }
}

void initialParent()
{
    for(int i=0; i<=city; i++)
        parent[i] = i;
}

void makeJoin(int root1,int root2)
{
    parent[root1] = parent[root2];
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
int Krushkal(vector<Connection>graph,int start,int stop)
{
    int load = 10e+7;
    for(int i=0; i<graph.size(); i++)
    {
        int root1 =  getParent(graph[i].node1);
        int root2 =  getParent(graph[i].node2);

        if(root1 != root2)
        {
            makeJoin(root1, root2);
            load = min(load, graph[i].cost);
        }
        if(getParent(start)==getParent(stop)) break;
    }
    return load;
}
