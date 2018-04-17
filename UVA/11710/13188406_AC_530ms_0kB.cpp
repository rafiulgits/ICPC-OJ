#include<bits/stdc++.h>
using namespace std;
typedef long long big;
int parent[410];
int city;
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
void initialParent();
int Krushkal(vector<Connection>graph);
int getParent(int node);

int main()
{
    int road;
    while(cin >> city >> road)
    {
        if(!city && !road) break;

        string name;
        map<string,int>key;
        for(int i=0; i<city; i++)
        {
            cin >> name;
            key[name] = i;
        }
        vector<Connection>graph;
        for(int i=0; i<road; i++)
        {
            Connection temp;
            cin >> name;
            temp.node1 = key[name];
            cin >> name;
            temp.node2 = key[name];
            cin >> temp.cost;

            graph.push_back(temp);
        }

        cin >> name;
        if(road < city-1)
        {
            puts("Impossible");
            continue;
        }

        initialParent();
        sort(graph.begin(), graph.end());
        int cost = Krushkal(graph);
        if(cost == -1) puts("Impossible");
        else cout << cost << endl;
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
    if(counter != city-1) return -1;
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
