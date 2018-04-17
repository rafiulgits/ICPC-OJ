/*
LightOJ 1281 - New Traffic System
*/

#include<bits/stdc++.h>
#define INFINITE 99999999999999
#define OLD 0
#define NEW 1
#define add make_pair

using namespace std;
typedef pair<int,int>Pair;
typedef pair<int,Pair>Way;
typedef long long big;

int main()
{
    int Case; cin>>Case;
    for(int c=1; c<=Case; c++)
    {
        int vertax,edges,propose,limit;
        cin>>vertax>>edges>>propose>>limit;

        vector<Way>graph[vertax];

        for(int i=0,from,to,cost; i<edges; i++)
        {
            cin>>from>>to>>cost;
            graph[from].push_back(add(cost,add(to,OLD)));
        }
        for(int i=0,from,to,cost; i<propose; i++)
        {
            cin>>from>>to>>cost;
            graph[from].push_back(add(cost,add(to,NEW)));
        }

        big dis[limit+5][vertax]; memset(&dis[0][0],-1,sizeof(dis));
        dis[OLD][0] = 0;
        multiset<Way>next; next.insert(add(0,add(0,OLD)));

        while(! next.empty())
        {
            Way now = *next.begin(); next.erase(next.begin());
            int pCost = now.first;
            int pNode = now.second.first;
            int pUsed  = now.second.second;

            for(int i=0; i<graph[pNode].size(); i++)
            {
                int cCost = graph[pNode][i].first;
                int cNode = graph[pNode][i].second.first;
                int cUsed = graph[pNode][i].second.second;

                int tUsed = pUsed + cUsed;
                big tCost = pCost + cCost;

                if(tUsed<= limit && (dis[tUsed][cNode]==-1 || dis[tUsed][cNode] > tCost))
                {
                    dis[tUsed][cNode] = tCost;
                    next.insert(add(tCost,add(cNode,tUsed)));
                }
            }
        }
        printf("Case %d: ",c);
        big shortest = INFINITE;
        for(int i=0; i<=limit; i++)
        {
            if(dis[i][vertax-1]== -1) continue;
            shortest = min(shortest,dis[i][vertax-1]);
        }
        if(shortest==INFINITE)puts("Impossible");
        else printf("%lld\n",shortest);
    }
}