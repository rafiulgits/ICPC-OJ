#include<bits/stdc++.h>

using namespace std;
typedef long long big;

class Connection
{
    public:
    int node1; int node2; int cost;
    bool operator<(const Connection obj)const
    {
        return obj.cost > cost;
    }
};

int city;
int parent[10010];

void initialParent();
void makeJoin(int root1, int root2);
int getParent(int node);

int main()
{
    int Case; cin>>Case;
    for(int c=1; c<=Case; c++)
    {
        int roads; int airCost;
        cin >> city >> roads >> airCost;

        vector<Connection>graph;
        for(int i=0; i<roads; i++)
        {
            Connection temp;
            cin >> temp.node1 >> temp.node2 >> temp.cost;
            graph.push_back(temp);
        }
        sort(graph.begin(), graph.end());
        initialParent();

        int totalCost = 0;
        int airport = 0;

        for(int i=0; i<graph.size(); i++)
        {
            if(graph[i].cost >= airCost) continue;

            int root1 = getParent(graph[i].node1);
            int root2 = getParent(graph[i].node2);

            if(root1 != root2)
            {
                makeJoin(root1, root2);
                totalCost += graph[i].cost;
            }
        }

        /* check how many city are connected */
        for(int i=1; i<=city; i++)
        {
            if(parent[i] == i)
                airport++;
        }
        totalCost += (airCost*airport);
        printf("Case #%d: %d %d\n",c,totalCost,airport);
    }
}
void initialParent()
{
    for(int i=0; i<=city+2; i++)
        parent[i] = i;
}
void makeJoin(int root1, int root2)
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
