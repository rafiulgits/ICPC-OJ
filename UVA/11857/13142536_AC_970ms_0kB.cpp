#include<bits/stdc++.h>
#define MAX_CITY 10000010

using namespace std;
typedef long long Big;

Big parent[MAX_CITY];
Big nodes; Big edges;

class Connection
{
    public:
    Big node1; Big node2; Big cost;
    bool operator<(const Connection obj)const
    {
        return obj.cost > cost;
    }
};

void initialParent()
{
    for(Big i=0; i<=nodes; i++)
        parent[i] = i;
}
void makeJoin(Big root1, Big root2)
{
    parent[root1] = parent[root2];
}
Big getParent(Big vertax)
{
    while(parent[vertax] != vertax)
    {
        parent[vertax] = parent[parent[vertax]];
        vertax = parent[vertax];
    }
    return vertax;
}
Big Krushkal(vector<Connection>graph)
{
    Big average = 0;
    for(Big i=0; i<graph.size(); i++)
    {
        Big root1 = getParent(graph[i].node1);
        Big root2 = getParent(graph[i].node2);

        if(root1 != root2)
        {
            makeJoin(root1, root2);
            average = max(average,graph[i].cost);
        }
    }
    Big counter = 0;
    for(Big i=0; i<nodes; i++)
    {
        if(parent[i]==i) counter++;
    }
    if(counter > 1 || average == 0) return -1;
    return average;
}
int main()
{
    while(cin>>nodes>>edges)
    {
        if(!nodes && !edges) break;

        Connection temp;
        vector<Connection>graph;

        for(Big i=0; i<edges; i++)
        {
            cin>>temp.node1>>temp.node2>>temp.cost;
            graph.push_back(temp);
        }
        if(edges < nodes-1)
        {
            puts("IMPOSSIBLE");
            continue;
        }
        sort(graph.begin(), graph.end());
        initialParent();
        Big ans = Krushkal(graph);

        if(ans != -1) cout << ans << endl;
        else puts("IMPOSSIBLE");
    }
}
