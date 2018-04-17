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

int parent[760];
int city;

void initialParent();
void makeJoin(int root1,int root2);
int getParent(int node);
double getDis(Point A, Point B);

int main()
{
    int Case; cin>>Case;
    bool next = false;
    while(Case--)
    {
        if(next) cout << endl;

        cin >> city;

        vector<Point>co_ordnt;
        for(int i=0,x,y; i<city; i++)
        {
            cin>>x>>y;
            co_ordnt.push_back(mp(x,y));
        }

        initialParent();
        int oldways; cin>>oldways;
        for(int i=0,x,y; i<oldways; i++)
        {
            cin>>x>>y;
            makeJoin(getParent(x-1),getParent(y-1));
        }

        vector<Connection>graph;
        for(int i=0; i<city-1; i++)
        {
            for(int j=i+1; j<city; j++)
            {
                Connection temp;
                temp.node1 = i;
                temp.node2 = j;
                temp.cost = getDis(co_ordnt[i], co_ordnt[j]);

                graph.push_back(temp);
            }
        }

        co_ordnt.clear();
        sort(graph.begin(), graph.end());
        int counter = 0;
        for(int i=0; i<graph.size(); i++)
        {
            int root1 = getParent(graph[i].node1);
            int root2 = getParent(graph[i].node2);

            if(root1 != root2)
            {
                counter++;
                makeJoin(root1, root2);
                co_ordnt.push_back(mp(graph[i].node1, graph[i].node2));

            }
            if(counter == city-1) break;
        }

        if(co_ordnt.empty()) puts("No new highways need");
        else
        {
            sort(co_ordnt.begin(),co_ordnt.end());
            for(int i=0; i<co_ordnt.size(); i++)
                printf("%d %d\n",co_ordnt[i].first+1,co_ordnt[i].second+1);
        }
        next = true;
    }
}

void initialParent()
{
    for(int i=0; i<=city+2; i++)
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
