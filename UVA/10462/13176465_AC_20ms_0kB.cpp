#include<bits/stdc++.h>
using namespace std;

class Connection
{
    public:
    int node1; int node2; int cost;
    bool operator<(const Connection obj) const
    {
        return obj.cost > cost;
    }
};

const int INFINITE = 10e+8;
int building=10;
int parent[110];

void initialParent();
void makeJoin(int root1, int root2);
int getParent(int node);
int Krushkal(vector<Connection>graph, int index);

int main()
{
    int Case; cin>>Case;
    for(int c=1; c<=Case; c++)
    {
        printf("Case #%d : ",c);

        int roads;
        cin>> building >> roads;

        Connection temp;
        vector<Connection>graph;

        for(int i=0; i<roads; i++)
        {
            cin>> temp.node1 >> temp.node2 >> temp.cost;
            graph.push_back(temp);
        }
        sort(graph.begin(), graph.end());
        vector<int>MST;

        /* find out the First MST */
        int firstMSTCost = 0;
        initialParent(); int counter = 0;
        for(int i=0; i<graph.size(); i++)
        {
            int root1 = getParent(graph[i].node1);
            int root2 = getParent(graph[i].node2);

            if(root1 != root2)
            {
                makeJoin(root1, root2);
                firstMSTCost += graph[i].cost;

                MST.push_back(i);
                counter++;
            }
            if(counter == building-1) break;
        }

        if(counter != building-1)
        {
            puts("No way");
            continue;
        }


        /* find out second MST */
        int secondMSTCost = INFINITE;
        for(int i=0; i<MST.size(); i++)
        {
            initialParent();
            int cost = Krushkal(graph, MST[i]);
            if(cost == -1) continue;
            secondMSTCost = min(cost, secondMSTCost);
        }
        if(secondMSTCost == INFINITE)
            puts("No second way");
        else
            cout << secondMSTCost << endl;
    }
}
void initialParent()
{
    for(int i=0; i<=building; i++)
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
int Krushkal(vector<Connection>graph, int index)
{
    int cost = 0; int counter = 0;
    for(int i=0; i<graph.size(); i++)
    {
        if(i==index)  continue;

        int root1 = getParent(graph[i].node1);
        int root2 = getParent(graph[i].node2);

        if(root1 != root2)
        {
            makeJoin(root1, root2);
            cost += graph[i].cost;

            counter++;
        }
        if(counter == building-1) break;
    }
    if(counter != building-1) return -1;
    return cost;
}
