#include<bits/stdc++.h>
#define mp make_pair

using namespace std;
typedef pair<int,int>Pair;
typedef long long big;

int airCost; int city; int airport;

big Prim(vector<Pair>graph[], int start);
bool visit[10010];

int main()
{
    int Case; cin>>Case;
    for(int c=1; c<=Case; c++)
    {
        int roads;
        cin >> city >> roads >> airCost;

        vector<Pair>graph[city+1];
        for(int i=0,node1,node2,cost; i<roads; i++)
        {
            cin >> node1 >> node2 >> cost;
            graph[node1].push_back(mp(cost,node2));
            graph[node2].push_back(mp(cost,node1));
        }
        memset(visit,false,sizeof(visit));

        airport = 0;
        big totalCost = 0;

        for(int i=1; i<=city; i++)
        {
            if(visit[i]) continue;
            totalCost += Prim(graph,i);
            airport++;
        }
        totalCost += (airCost*airport);

        printf("Case #%d: %lld %d\n",c,totalCost,airport);
    }
}
big Prim(vector<Pair>graph[], int start)
{
    multiset<Pair>next; next.insert(mp(0,start));
    big totalCost = 0;

    while(! next.empty())
    {
        int pNode = (*next.begin()).second;
        int pCost = (*next.begin()).first;
        next.erase(next.begin());

        if(pCost >= airCost) continue;

        if(visit[pNode]) continue;
        visit[pNode] = true;
        totalCost += pCost;

        for(int i=0; i<graph[pNode].size(); i++)
        {
            int cNode = graph[pNode][i].second;
            int cCost = graph[pNode][i].first;

            if(visit[cNode]) continue;
            next.insert(graph[pNode][i]);
        }
    }
    return totalCost;
}
