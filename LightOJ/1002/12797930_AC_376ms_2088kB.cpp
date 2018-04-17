#include<bits/stdc++.h>
#define INFINITE 9999999999999999

using namespace std;
typedef pair<int,int> Pair;

int main()
{
    int Case; cin >> Case;
    for(int c=1; c<=Case; c++)
    {
        int vertax; int edges;
        cin >> vertax >> edges;
        vector<Pair>adj[vertax];

        for(int i=0, node1,node2,cost; i<edges; i++)
        {
            cin >> node1 >> node2 >> cost;
            adj[node1].push_back(make_pair(cost,node2));
            adj[node2].push_back(make_pair(cost,node1));
        }
        int start; cin >> start;

        long long dis[vertax]; fill(dis, dis+vertax, INFINITE); dis[start] = 0;
        bool visit[vertax]; memset(visit,false,sizeof(visit));
        multiset<Pair>next; next.insert(make_pair(0,start));

        while(! next.empty())
        {
            int pCost = (*next.begin()).first;
            int pNode = (*next.begin()).second;
            next.erase(next.begin());

            if(visit[pNode]) continue;

            visit[pNode] = true;

            for(int i=0; i<adj[pNode].size(); i++)
            {
                int cCost = adj[pNode][i].first;
                int cNode = adj[pNode][i].second;
                int tCost = max(cCost,pCost);
                if(dis[cNode] > tCost)
                {
                    dis[cNode] = tCost;
                    next.insert(make_pair(tCost,cNode));
                }
            }
        }
        printf("Case %d:\n",c);

        for(int i=0; i<vertax; i++)
        {
            if(dis[i]==INFINITE) printf("Impossible\n");
            else printf("%ld\n",dis[i]);
        }
    }
}
