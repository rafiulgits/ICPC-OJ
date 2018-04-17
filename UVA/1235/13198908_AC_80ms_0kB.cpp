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

int Lock = 510;
int parent[510];

void makeJoin(int root1, int root2);
void initialParent();
int getParent(int node);
int getRoller(string p1, string p2);
int Krushkal(vector<Connection>graph);

int main()
{
    int Case; cin>>Case;
    while(Case--)
    {
        cin >> Lock;

        vector<string>data;
        data.push_back("0000");
        for(int i=0; i<Lock; i++)
        {
            string temp; cin>>temp;
            data.push_back(temp);
        }

        vector<Connection>graph;
        for(int i=0; i<data.size()-1; i++)
        {
            for(int j=i+1; j<data.size(); j++)
            {
                Connection temp;
                temp.node1 = i;
                temp.node2 = j;
                temp.cost = getRoller(data[i],data[j]);

                graph.push_back(temp);
            }
        }
        initialParent();
        sort(graph.begin(), graph.end());
        cout << Krushkal(graph) << endl;
    }
}
int Krushkal(vector<Connection>graph)
{
    int totalCost = 0; bool tried = false;
    for(int i=0; i<graph.size(); i++)
    {
        if(graph[i].node1 == 0)
        {
            if(tried) continue;
            tried = true;
        }

        int root1 = getParent(graph[i].node1);
        int root2 = getParent(graph[i].node2);

        if(root1 != root2)
        {
            totalCost+=graph[i].cost;
            makeJoin(root1,root2);
        }
    }
    return totalCost;
}
int getRoller(string p1, string p2)
{
    int sum = 0;
    for(int i=0; i<4; i++)
    {
        int n1 = p1[i] - '0';
        int n2 = p2[i] - '0';
        sum += min(abs(n1-n2), 10-abs(n1-n2));
    }
    return sum;
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
    for(int i=0; i<=Lock; i++)
        parent[i] = i;
}
