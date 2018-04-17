#include<bits/stdc++.h>
#define INFINITE 9999999999999999
#define NODE 20010

using namespace std;
typedef pair<int,int>Pair;

int main()
{
    int Case; cin >> Case;

    for(int c=1; c<=Case; c++)
    {
        int vertax; int edges; int start; int stop;
        cin >> vertax >> edges >> start >> stop;

        vector<Pair>adj[vertax];

        for(int i=0,node1,node2,cost; i<edges; i++)
        {
            cin>>node1>>node2>>cost;
            adj[node1].push_back(make_pair(cost,node2));
            adj[node2].push_back(make_pair(cost,node1));
        }

        long long dis[vertax]; fill(dis,dis+vertax,INFINITE);
        multiset<Pair>next; next.insert(make_pair(0,start));
        dis[start] = 0; bool visit[vertax] = {false};

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
        printf("Case #%d: ",c);
        if(dis[stop] == INFINITE) printf("unreachable\n");
        else printf("%ld\n",dis[stop]);
    }
}
