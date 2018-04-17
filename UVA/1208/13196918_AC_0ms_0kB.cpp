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

int gates;
int parent[30];

void makeJoin(int root1, int root2);
void initialParent();
int getParent(int node);

int main()
{
    int Case; cin>>Case;
    for(int c=1; c<=Case; c++)
    {
        cin>>gates;

        vector<Connection>graph;
        for(int i=0; i<gates; i++)
        {
            for(int j=0; j<gates; j++)
            {
                Connection temp;

                temp.node1 = min(i,j);
                temp.node2 = max(i,j);

                cin >> temp.cost;
                if(j < gates-1)
                {
                    char comma;
                    cin>>comma;
                }
                if(temp.cost == 0) continue;
                graph.push_back(temp);
            }
        }

        printf("Case %d:\n",c);

        sort(graph.begin(), graph.end());
        initialParent(); int counter = 0;
        for(int i=0; i<graph.size(); i++)
        {
            int root1 = getParent(graph[i].node1);
            int root2 = getParent(graph[i].node2);

            if(root1 != root2)
            {
                counter++;
                makeJoin(root1,root2);
                printf("%c-%c %d\n",graph[i].node1+65,
                       graph[i].node2+65,graph[i].cost);
            }
            if(counter==gates-1) break;
        }
    }
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
    for(int i=0; i<=gates+2; i++)
        parent[i] = i;
}
