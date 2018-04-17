#include<bits/stdc++.h>
using namespace std;

typedef pair<double,double> Point;
class Connection
{
    public:
    int node1; int node2; double cost;
    bool operator<(const Connection obj)const
    {
        return obj.cost > cost;
    }
};

int parent[110];

double getDis(Point A, Point B);
double Krushkal(vector<Connection>graph);
int getParent(int node);
void makeJoin(int root1, int root2);
void initialParent(int vertex);

int main()
{
    int Case; cin>>Case; bool next = false;
    while(Case--)
    {
        if(next) cout<<endl;
        int n; cin>>n;
        double x,y;
        vector<Point>co_ordinate;
        for(int i=0; i<n; i++)
        {
            cin>>x>>y;
            co_ordinate.push_back(make_pair(x,y));
        }
        Connection temp;
        vector<Connection>graph;
        for(int i=0; i<n-1; i++)
        {
            temp.node1 = i;
            for(int j=i+1; j<n; j++)
            {
                temp.node2 = j;
                temp.cost = getDis(co_ordinate[i],co_ordinate[j]);
                graph.push_back(temp);
            }
        }
        sort(graph.begin(), graph.end());
        initialParent(n);
        printf("%.2f\n",Krushkal(graph));
        next = true;
    }
}
double getDis(Point A, Point B)
{
    return sqrt((double)((A.first-B.first)*(A.first-B.first)) +
                (double)((A.second-B.second)*(A.second-B.second)));
}
double Krushkal(vector<Connection>graph)
{
    double totalCost = 0.0;
    for(int i=0; i<graph.size(); i++)
    {
        int root1 = getParent(graph[i].node1);
        int root2 = getParent(graph[i].node2);
        if(root1 != root2)
        {
            makeJoin(root1, root2);
            totalCost += graph[i].cost;
        }
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
void initialParent(int vertex)
{
    for(int i=0; i<=vertex+2; i++)
        parent[i] = i;
}
