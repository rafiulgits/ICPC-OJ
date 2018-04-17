#include<bits/stdc++.h>
#define vertex 1000010

using namespace std;
typedef long long big;

/* nodes parent information array */
int parent[vertex];

/* connection class carry total information about a road
   two connected city and cost between them. A complete
   edge information */
class Connection
{
    public:
    int node1; int node2; int cost;
    bool operator< (const Connection obj) const
    {
        return obj.cost > cost;
    }
};

/* functions prototypes */
void initialParent(int nodes);
void makeJoin(int root1,int root2);
int getRoot(int node);
int Krushkal(vector<Connection>graph);

int main()
{
    int N; bool next = false;
    while(cin>>N)
    {
        /* for multiple input there need an extra blank line */
        if(next) cout << endl;

        /* total construction graph */
        vector<Connection>graph;
        Connection temp;
        big previousTotal = 0;
        for(int i=1; i<N; i++)
        {
            cin>>temp.node1>>temp.node2>>temp.cost;
            graph.push_back(temp);
            /* as previous connection is already in MST form
               so just add up the previous nodes costs*/
            previousTotal+=temp.cost;
        }
        /* insert new connections in the graph */
        int K; cin>>K;
        for(int i=0; i<K; i++)
        {
            cin>>temp.node1>>temp.node2>>temp.cost;
            graph.push_back(temp);
        }
        /* actually we don't need previous MST's graph.
           Because we already have an MST and as we use
           KRUSHKAL algorithm - after sort the graph the
           previous graph's unused connection again
           become useless . So just input these information
           but don't use anyone: */

        int M; cin>>M;
        for(int i=0;  i<M; i++)
            cin>>temp.node1>>temp.node2>>temp.cost;

        /* sort the graph and initial the parent array*/
        sort(graph.begin(),graph.end());
        initialParent(N+K+2);

        /* print 2 information: previous and now */
        cout << previousTotal << endl;
        cout << Krushkal(graph) << endl;

        /* for blank line */
        next = true;
    }
}
int Krushkal(vector<Connection>graph)
{
    big totalCost = 0;
    for(int i=0; i<graph.size(); i++)
    {
        int root1 = getRoot(graph[i].node1);
        int root2 = getRoot(graph[i].node2);

        if(root1 != root2)
        {
            totalCost+=(big)graph[i].cost;
            makeJoin(root1,root2);
        }
    }
    return totalCost;
}
void initialParent(int nodes)
{
    for(int i=0; i<=nodes+1; i++)
        parent[i] = i;
}
int getRoot(int node)
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
