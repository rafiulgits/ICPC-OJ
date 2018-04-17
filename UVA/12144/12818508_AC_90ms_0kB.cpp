#include<bits/stdc++.h>
#define INFINITE 99999999
using namespace std;
typedef pair<int,int> Pair;
typedef long long big;
vector<big> Dijkstra(int start, int vertax, vector<Pair>graph[],vector<big>dis);
int main()
{

    int vertax; int edges;
    while(cin>>vertax>>edges)
    {
        if(!vertax && !edges) break;
        int start;int stop; cin>>start>>stop;

        vector<Pair>graph[vertax]; vector<Pair>revGraph[vertax];
        for(int i=0,from,to,cost; i<edges; i++)
        {
            cin>>from>>to>>cost;
            graph[from].push_back(make_pair(cost,to));
            revGraph[to].push_back(make_pair(cost,from));
        }
        vector<big>dis(vertax,INFINITE); dis = Dijkstra(start,vertax,graph,dis);
        vector<big>revDis(vertax,INFINITE); revDis = Dijkstra(stop,vertax,revGraph,revDis);

        bool visit[vertax]; memset(visit,false,sizeof(visit));
        vector<int>sDis(vertax,INFINITE); sDis[start] = 0;
        multiset<Pair>next; next.insert(make_pair(0,start));

        while(! next.empty())
        {
            int pCost = (*next.begin()).first;
            int pNode = (*next.begin()).second;
            next.erase(next.begin());

            if(visit[pNode]) continue;
            visit[pNode] = true;

            for(int i=0; i<graph[pNode].size(); i++)
            {
                int cCost = graph[pNode][i].first;
                int cNode = graph[pNode][i].second;
                big tCost = pCost + cCost;

                if(dis[pNode]+revDis[cNode]+cCost==dis[stop]) continue;
                if(sDis[cNode] > tCost)
                {
                    sDis[cNode] = tCost;
                    next.insert(make_pair(tCost,cNode));
                }
            }
        }
        if(sDis[stop]==INFINITE) cout << -1 << endl;
        else cout << sDis[stop] << endl;
    }
}
vector<big> Dijkstra(int start, int vertax, vector<Pair>graph[],vector<big>dis)
{
    bool visit[vertax]; memset(visit,false,sizeof(visit));
    dis[start] = 0; multiset<Pair>next; next.insert(make_pair(0,start));

    while(! next.empty())
    {
        int pCost = (*next.begin()).first;
        int pNode = (*next.begin()).second;
        next.erase(next.begin());

        if(visit[pNode]) continue;
        visit[pNode] = true;

        for(int i=0; i<graph[pNode].size(); i++)
        {
            int cCost = graph[pNode][i].first;
            int cNode = graph[pNode][i].second;
            big tCost = pCost + cCost;

            if(dis[cNode] > tCost)
            {
                dis[cNode] = tCost;
                next.insert(make_pair(tCost,cNode));
            }
        }
    }
    return dis;
}