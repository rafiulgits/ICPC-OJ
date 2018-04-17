#include<bits/stdc++.h>
#define mp make_pair

using namespace std;
typedef pair<double,double>Point;

class Connection
{
    public:
    int node1; int node2; double cost;
    bool operator<(const Connection obj) const
    {
        return obj.cost > cost;
    }
};

int parent[755];
int building;

void initialParent();
void makeJoin(int root1, int root2);
double Krushkal(vector<Connection>graph);
double getDis(Point A, Point B);
int getParent(int node);

int main()
{
    while(cin>>building)
    {
        double x,y; vector<Point>co_ordnt;
        for(int i=0; i<building; i++)
        {
            cin>>x>>y;
            co_ordnt.push_back(mp(x,y));
        }

        initialParent();
        int connected; cin>>connected;
        for(int i=0,a,b; i<connected; i++)
        {
            cin>>a>>b;
            makeJoin(getParent(a-1), getParent(b-1));
        }

        Connection temp;
        vector<Connection>graph;

        for(int i=0; i<building-1; i++)
        {
            for(int j=i+1; j<building; j++)
            {
                temp.node1 = i;
                temp.node2 = j;
                temp.cost = getDis(co_ordnt[i],co_ordnt[j]);

                graph.push_back(temp);
            }
        }
        sort(graph.begin(), graph.end());
        printf("%.2f\n",Krushkal(graph));
    }
}
double getDis(Point A, Point B)
{
    return sqrt((A.first-B.first)*(A.first-B.first)+
                (A.second-B.second)*(A.second-B.second));
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
double Krushkal(vector<Connection>graph)
{
    double total = 0;
    for(int i=0; i<graph.size(); i++)
    {
        int root1 = getParent(graph[i].node1);
        int root2 = getParent(graph[i].node2);

        if(root1 != root2)
        {
            makeJoin(root1, root2);
            total += graph[i].cost;
        }
    }
    return total;
}
