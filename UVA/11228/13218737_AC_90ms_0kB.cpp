#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> Point;
class Connection
{
    public:
    int node1; int node2; double cost;
    bool operator<(const Connection obj)const
    {
        return obj.cost > cost;
    }
};

int parent[1010];
int maxDis;
int city;
int states;
double roadCost;
double railCost;


double getDis(Point A, Point B);
void Krushkal(vector<Connection>graph);
int getParent(int node);
void makeJoin(int root1, int root2);
void initialParent();

int main()
{
    int Case; cin>>Case;
    for(int c=1; c<=Case; c++)
    {
        cin >> city >> maxDis;

        vector<Point>co_ordinate;
        for(int i=0,x,y; i<city; i++)
        {
            cin>>x>>y;
            co_ordinate.push_back(make_pair(x,y));
        }
        Connection temp;
        vector<Connection>graph;
        for(int i=0; i<city-1; i++)
        {
            temp.node1 = i;
            for(int j=i+1; j<city; j++)
            {
                temp.node2 = j;
                temp.cost = getDis(co_ordinate[i],co_ordinate[j]);
                graph.push_back(temp);
            }
        }
        sort(graph.begin(), graph.end());
        initialParent();
        Krushkal(graph);
        printf("Case #%d: ",c);
        printf("%d %d %d\n",states,(int)round(roadCost),(int)round(railCost));
    }
}
double getDis(Point A, Point B)
{
    return sqrt((double)((A.first-B.first)*(A.first-B.first)) +
                (double)((A.second-B.second)*(A.second-B.second)));
}
void Krushkal(vector<Connection>graph)
{
    roadCost = 0; railCost = 0;
    states = 1; int counter = 0;
    for(int i=0; i<graph.size(); i++)
    {
        int root1 = getParent(graph[i].node1);
        int root2 = getParent(graph[i].node2);
        if(root1 != root2)
        {
            counter++;
            makeJoin(root1, root2);
            if(graph[i].cost > maxDis)
            {
                railCost += graph[i].cost;
                states++;
            }
            else
                roadCost += graph[i].cost;
        }
        if(counter == city-1) break;
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
