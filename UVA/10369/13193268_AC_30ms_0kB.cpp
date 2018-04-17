#include<bits/stdc++.h>
#define mp make_pair

using namespace std;
typedef pair<int,int>Point;

class Connection
{
    public:
    int node1; int node2; double cost;
    bool operator<(const Connection obj) const
    {
        return obj.cost > cost;
    }
};

int parent[510];
int city; int sat;

double Krushkal(vector<Connection>graph);
double getDis(Point A, Point B);
void initialParent();
void makeJoin(int root1, int root2);
int getParent(int node);

int main()
{
    int Case; cin>>Case;
    while(Case--)
    {
        cin>>sat>>city;

        vector<Point>co_ordnt;
        for(int i=0,x,y; i<city; i++)
        {
            cin >> x >> y;
            co_ordnt.push_back(mp(x,y));
        }
        vector<Connection>graph;
        for(int i=0; i<city-1; i++)
        {
            for(int j=i+1; j<city; j++)
            {
                Connection temp;
                temp.node1 = i;
                temp.node2 = j;
                temp.cost = getDis(co_ordnt[i],co_ordnt[j]);

                graph.push_back(temp);
            }
        }
        sort(graph.begin(),graph.end());
        initialParent();
        printf("%.2f\n",Krushkal(graph));
    }
}
double Krushkal(vector<Connection>graph)
{
    double total = 0; int counter = 0;
    for(int i=0; i<graph.size(); i++)
    {
        int root1 = getParent(graph[i].node1);
        int root2 = getParent(graph[i].node2);

        if(root1 != root2)
        {
            makeJoin(root1, root2);
            total = max(total,graph[i].cost);
            counter++;
        }
        if(counter == city-sat) break;
    }
    return total;
}
double getDis(Point A, Point B)
{
    return sqrt((double)((A.first-B.first)*(A.first-B.first))+
                (double)((A.second-B.second)*(A.second-B.second)));
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
