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

int parent[10010];
int city;

void initialParent();
void makeJoin(int root1, int root2);
int getParent(int node);
int Krushkal(vector<Connection>graph);

int main()
{
    int Case; cin >> Case;
    while(Case--)
    {
        int roads;
        cin>>city>>roads;

        int totalCost = 0;
        vector<Connection>graph;
        for(int i=0; i<roads; i++)
        {
            Connection temp;
            cin>>temp.node1>>temp.node2>>temp.cost;
            graph.push_back(temp);

            totalCost+=temp.cost;
        }

        /* sort in descending order */
        sort(graph.begin(), graph.end());
        initialParent();
        int mstCost = Krushkal(graph);

        /* print the difference of Max Spanning Tree and Total */
        cout << totalCost - mstCost << endl;
    }
    int unknowndata; cin>>unknowndata;
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
int Krushkal(vector<Connection>graph)
{
    int mstCost = 0; int counter = 0;
    for(int i=0; i<graph.size(); i++)
    {
        int root1 = getParent(graph[i].node1);
        int root2 = getParent(graph[i].node2);

        if(root1 != root2)
        {
            makeJoin(root1, root2);
            mstCost+=graph[i].cost;
            counter++;
        }
        if(counter == city-1) break;
    }
    return mstCost;
}
