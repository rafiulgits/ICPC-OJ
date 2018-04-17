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

vector<int>heaviest;

int parent[1010];
int city;

void makeJoin(int root1, int root2);
void initialParent();
void Krushkal(vector<Connection>graph);
int getParent(int node);

int main()
{
    int roads;
    while(cin>>city>>roads)
    {
        if(!city && !roads) break;

        vector<Connection>graph;
        for(int i=0; i<roads; i++)
        {
            Connection temp;
            cin>>temp.node1>>temp.node2>>temp.cost;
            graph.push_back(temp);
        }

        sort(graph.begin(), graph.end());
        initialParent();
        Krushkal(graph);
        sort(heaviest.begin(),heaviest.end());
        if(heaviest.empty()) puts("forest");
        else
        {
            printf("%d",heaviest[0]);
            for(int i=1; i<heaviest.size(); i++)
                printf(" %d",heaviest[i]);
            cout << endl;
        }
        heaviest.clear();
    }
}
void Krushkal(vector<Connection>graph)
{
    for(int i=0; i<graph.size(); i++)
    {
        int root1 = getParent(graph[i].node1);
        int root2 = getParent(graph[i].node2);

        if(root1 != root2)
        {
            makeJoin(root1,root2);
        }
        else
        {
            heaviest.push_back(graph[i].cost);
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
    for(int i=0; i<=city+2; i++)
        parent[i] = i;
}
