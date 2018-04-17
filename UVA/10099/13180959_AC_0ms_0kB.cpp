#include<bits/stdc++.h>
using namespace std;

class Connection
{
    public:
    int node1; int node2; int load;
    bool operator<(const Connection obj) const
    {
        return obj.load < load;
    }
};
const int INFINITE = 10e+7;
int city;
int parent[110];

void initialParent();
void makeJoin(int root1, int root2);
int getParent(int node);
int Krushkal(vector<Connection>graph, int start, int stop);

int main()
{
    int road; int Case = 1;
    while(cin >> city >> road)
    {
        if(!city && !road) break;

        Connection temp;
        vector<Connection>graph;
        for(int i=0; i<road; i++)
        {
            cin>>temp.node1>>temp.node2>>temp.load;
            graph.push_back(temp);
        }
        int start; int stop; int tourists;
        cin >> start >> stop >> tourists;

        /* sort in descending order */
        sort(graph.begin(), graph.end());
        initialParent();
        int load = Krushkal(graph,start,stop);

        int counter = 0;
        /* every time count the tourist number without the guide */
        short int leader = 1;
        load -= leader;

        while(tourists > 0)
        {
            tourists -= load;
            counter++;
        }
        printf("Scenario #%d\nMinimum Number of Trips = %d\n\n",Case,counter);
        Case++;
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
int Krushkal(vector<Connection>graph, int start, int stop)
{
    int maxLoad = INFINITE; int counter = 0;
    for(int i=0; graph.size(); i++)
    {
        if(getParent(start) == getParent(stop))
            break;

        int root1 = getParent(graph[i].node1);
        int root2 = getParent(graph[i].node2);

        if(root1 != root2)
        {
            makeJoin(root1, root2);
            maxLoad = min(maxLoad, graph[i].load);
            counter++;
        }
        if(counter == city-1) break;
    }
    return maxLoad;
}
