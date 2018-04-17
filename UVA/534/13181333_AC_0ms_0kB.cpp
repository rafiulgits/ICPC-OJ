#include<bits/stdc++.h>
#define mp make_pair

using namespace std;
typedef pair<int ,int>Point;

class Connection
{
    public:
    int node1; int node2; double cost;
    bool operator<(const Connection obj)const
    {
        return obj.cost > cost;
    }
};

int parent[210];
int vertex;

void initialParent();
void makeJoin(int root1,int root2);
int getParent(int node);
double getDis(Point A, Point B);

int main()
{
    int Case = 1;
    while(cin >> vertex)
    {
        if(! vertex) break;

        vector<Point>co_ordnt;
        for(int i=0,x,y; i<vertex; i++)
        {
            cin>>x>>y;
            co_ordnt.push_back(mp(x,y));
        }
        vector<Connection>graph;
        for(int i=0; i<vertex-1; i++)
        {
            for(int j=i+1; j<vertex; j++)
            {
                Connection temp;
                temp.node1 = i;
                temp.node2 = j;
                temp.cost = getDis(co_ordnt[i], co_ordnt[j]);

                graph.push_back(temp);
            }
        }
        short Freddy=0; short Fiona=1;

        sort(graph.begin(), graph.end());
        initialParent();

        double maxJump = -1; int counter = 0;
        for(int i=0; i<graph.size(); i++)
        {
            if(getParent(Freddy) == getParent(Fiona))
                break;

            int root1 = getParent(graph[i].node1);
            int root2 = getParent(graph[i].node2);

            if(root1 != root2)
            {
                makeJoin(root1, root2);
                maxJump = max(maxJump, graph[i].cost);
                counter++;
            }
            if(counter == vertex-1) break;
        }
        printf("Scenario #%d\nFrog Distance = %.3f\n\n",Case,maxJump);
        Case++;
    }
}

void initialParent()
{
    for(int i=0; i<=vertex+2; i++)
        parent[i] = i;
}
void makeJoin(int root1,int root2)
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
double getDis(Point A, Point B)
{
    return sqrt((double)((A.first-B.first)*(A.first-B.first))+
                (double)((A.second-B.second)*(A.second-B.second)));
}
