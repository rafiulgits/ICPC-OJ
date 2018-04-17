#include<bits/stdc++.h>
#define INFINITE 10e+7

using namespace std;
const int MAX_CITY = 10e+5;

int parent[MAX_CITY];
int city; int roads;

class Connection
{
    public:
    int node1; int node2; int cost;
    bool operator<(const Connection obj) const
    {
        return obj.cost < cost;
    }
};

void initialParent();
void makeJoin(int root1,int root2);
int getParent(int node);
int Krushkal(vector<Connection>graph);

int main()
{
    int Case; cin>>Case;
    for(int c=1; c<=Case; c++)
    {
        cin>>city>>roads;
        Connection temp;
        vector<Connection>graph;

        for(int i=0; i<roads; i++)
        {
            cin>>temp.node1>>temp.node2>>temp.cost;
            graph.push_back(temp);
        }
        sort(graph.begin(), graph.end());
        initialParent();
        printf("Case #%d: %d\n",c,Krushkal(graph));
    }
}
int Krushkal(vector<Connection>graph)
{
    int load = INFINITE; int counter = 0;
    for(int i=0; i<graph.size(); i++)
    {
        int root1 = getParent(graph[i].node1);
        int root2 = getParent(graph[i].node2);

        if(root1 != root2)
        {
            makeJoin(root1, root2);
            load = min(load, graph[i].cost);
            counter ++;
        }
        if(counter == city-1) break;
    }
    return load;
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
void makeJoin(int root1,int root2)
{
    parent[root1] = parent[root2];
}
void initialParent()
{
    for(int i=0; i<=city; i++)
        parent[i] = i;
}
