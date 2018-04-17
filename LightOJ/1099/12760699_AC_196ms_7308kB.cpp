#include<bits/stdc++.h>
#define INFINITE 99999999999999
using namespace std;
typedef pair<int,long long> Pair;

int main()
{
    int Case; cin >> Case;
    for(int c=1; c<=Case; c++)
    {
        int vertax; int edges;
        cin >> vertax >> edges;

        /* adjacent nodes :: graph */
        vector<Pair>adj[vertax+5];

        for(int i=0, node1,node2,weight; i<edges; i++)
        {
            cin >> node1>>node2>>weight;
            adj[node1].push_back(make_pair(weight,node2));
            adj[node2].push_back(make_pair(weight,node1));
        }

        long long dis1[vertax+5];
        long long dis2[vertax+5];


        fill(dis1,dis1+vertax+5,INFINITE);
        fill(dis2,dis2+vertax+5,INFINITE);


        dis1[1] = 0;
        multiset<Pair>next; next.insert(make_pair(0,1));

        while(! next.empty())
        {
            int pNode = (*next.begin()).second;
            int pCost = (*next.begin()).first;
            next.erase(next.begin());

            for(int i=0; i<adj[pNode].size(); i++)
            {
                int cNode = adj[pNode][i].second;
                int cCost = adj[pNode][i].first;

                long long tCost = pCost+cCost;

                if(dis1[cNode] > tCost)
                {
                    dis2[cNode] = dis1[cNode];
                    dis1[cNode] = tCost;

                    next.insert(make_pair(tCost, cNode));
                }
                if(dis2[cNode] > tCost && dis1[cNode] != tCost)
                {
                    dis2[cNode] = tCost;

                    next.insert(make_pair(tCost, cNode));
                }
            }
        }

        printf("Case %d: %ld\n",c,dis2[vertax]);
    }

}
