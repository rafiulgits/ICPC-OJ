#include<bits/stdc++.h>
#define INFINITE 9999999999999999
#define add make_pair

using namespace std;
typedef pair<int,int>Pair;
typedef pair<int,Pair>Way;

vector<int> Dijkstra(int start, int vertax, vector<Pair>graph[],vector<int>dis);
int main()
{

    int Case; cin>>Case;
    for(int c=1; c<=Case; c++)
    {
        int vertax,edges,start,stop,pocket;
        cin>>vertax>>edges>>start>>stop>>pocket;

        vector<Pair>road[vertax+5];
        vector<Pair>rev[vertax+5];

        for(int i=0,from,to,cost; i<edges; i++)
        {
            cin>>from>>to>>cost;
            road[from].push_back(add(cost,to));
            rev[to].push_back(add(cost,from));
        }
        vector<int>dis(vertax+5,INFINITE);
        vector<int>revDis(vertax+5,INFINITE);

        dis = Dijkstra(start,vertax+5,road,dis);
        revDis = Dijkstra(stop,vertax+5,rev,revDis);

        int pay = -1;

        bool visit[vertax+5]; memset(visit,false,sizeof(visit));
        queue<int>next; next.push(start);

        while(! next.empty())
        {
            int pNode = next.front(); next.pop();

            if(visit[pNode]) continue;
            visit[pNode] = true;

            for(int i=0; i<road[pNode].size(); i++)
            {
                int cCost = road[pNode][i].first;
                int cNode = road[pNode][i].second;

                if(dis[pNode] + cCost + revDis[cNode] <= pocket)
                {
                    pay = max(pay,cCost);
                    next.push(cNode);
                }
            }
        }
        printf("Case %d: %d\n",c,pay);
    }
}
vector<int> Dijkstra(int start, int vertax, vector<Pair>graph[],vector<int>dis)
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
            long long tCost = pCost + cCost;

            if(dis[cNode] > tCost)
            {
                dis[cNode] = tCost;
                next.insert(make_pair(tCost,cNode));
            }
        }
    }
    return dis;
}
