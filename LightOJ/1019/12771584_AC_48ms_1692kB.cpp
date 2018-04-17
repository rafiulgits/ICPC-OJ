#include<bits/stdc++.h>
#define INFINITE 99999999

using namespace std;
typedef pair<int,int>Pair;

int main()
{
    int Case; cin >> Case;

    for(int c=1; c<=Case; c++)
    {
        int vertax; int edges;
        cin >> vertax >> edges;

        vector<Pair>adj[vertax+1];

        for(int i=0,node1,node2,cost; i<edges; i++)
        {
            cin>>node1>>node2>>cost;
            adj[node1].push_back(make_pair(cost,node2));
            adj[node2].push_back(make_pair(cost,node1));
        }

        int dis[vertax+1]; fill(dis,dis+vertax+1,INFINITE);
        multiset<Pair>next; next.insert(make_pair(0,1));
        dis[1] = 0; bool visit[vertax+1];
        memset(visit,false,sizeof(visit));

        while(! next.empty())
        {
            int pNode = (*next.begin()).second;
            int pCost = (*next.begin()).first;
            next.erase(next.begin());

            if(visit[pNode]) continue;

            visit[pNode] = true;
            for(int i=0; i<adj[pNode].size(); i++)
            {
                int cNode = adj[pNode][i].second;
                int cCost = adj[pNode][i].first;
                int tCost = pCost + cCost;

                if(dis[cNode] > tCost)
                {
                    dis[cNode] = tCost;
                    next.insert(make_pair(tCost,cNode));
                }
            }
        }
        printf("Case %d: ",c);
        if(dis[vertax] == INFINITE) printf("Impossible\n");
        else printf("%d\n",dis[vertax]);
    }
}
