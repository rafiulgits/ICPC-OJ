#include<bits/stdc++.h>

using namespace std;
typedef pair<int,int> Pair;

int main()
{
    int Case; cin>>Case;
    while(Case--)
    {
        int vertax; int edges; cin>>vertax>>edges;
        vector<Pair>adj[vertax+1];
        for(int i=0,node1,node2,cost; i<edges; i++)
        {
            cin>>node1>>node2>>cost;
            adj[node1].push_back(make_pair(cost,node2));
            adj[node2].push_back(make_pair(cost,node1));
        }
        int start; cin >> start;

        long long dis[vertax+1];
        memset(dis,-1,sizeof(dis)); dis[start] = 0;
        bool visit[vertax+1] = {false};

        multiset<Pair>next; next.insert(make_pair(0,start));

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

                if(dis[cNode] > tCost || dis[cNode] == -1)
                {
                    dis[cNode] = tCost;
                    next.insert(make_pair(tCost,cNode));
                }
            }
        }
        if(start != 1)
        {

            printf("%ld",dis[1]);
            for(int i=2; i<=vertax; i++)
            {
                if(i==start) continue;

                printf(" %ld",dis[i]);
            }
        }
        else
        {
            for(int i=2; i<vertax; i++)
            {
                printf("%ld ",dis[i]);
            }
            printf("%ld",dis[vertax]);
        }
        cout << endl;
    }
}
