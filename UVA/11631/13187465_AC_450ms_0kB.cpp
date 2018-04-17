#include<bits/stdc++.h>
using namespace std;
typedef long long big;

class Connection
{
    public:
    int node1; int node2; int cost;
    bool operator <(const Connection obj) const
    {
        return obj.cost > cost;
    }
};
int parent[200010];
int city;

void makeJoin(int root1, int root2);
void initialParent();
int Krushkal(vector<Connection>graph);
int getParent(int node);

int main()
{
    int roads;
    while(cin>>city>>roads)
    {
        if(!city && !roads) break;

        vector<Connection>graph;
        int totalCost = 0;
        for(int i=0; i<roads; i++)
        {
            Connection temp;
            cin>>temp.node1>>temp.node2>>temp.cost;
            graph.push_back(temp);
            totalCost += temp.cost;
        }
        sort(graph.begin(), graph.end());
        initialParent();
        cout << totalCost - Krushkal(graph) << endl;
    }
}
int Krushkal(vector<Connection>graph)
{
    int totalCost = 0; int counter = 0;
    for(int i=0; i<graph.size(); i++)
    {
        int root1 = getParent(graph[i].node1);
        int root2 = getParent(graph[i].node2);

        if(root1 != root2)
        {
            totalCost+=graph[i].cost;
            makeJoin(root1,root2);
            counter++;
        }
        if(counter == city-1) break;
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
void initialParent()
{
    for(int i=0; i<=city+2; i++)
        parent[i] = i;
}
