#include<bits/stdc++.h>
#define walk 0
#define ride 1

using namespace std;
typedef pair<int,int>Pair;
typedef pair<Pair,int>Way;

int main()
{

    int vertax; int edges; int counter = 0;
    while(cin >> vertax >> edges)
    {
        vector<Pair>adj[vertax];
        for(int i=0,node1,node2,cost; i<edges; i++)
        {
            cin >> node1 >> node2 >> cost;
            adj[node1].push_back(make_pair(cost,node2));
            adj[node2].push_back(make_pair(cost,node1));
        }

        multiset<Way>next; Way now = make_pair(make_pair(0,0),0);
        next.insert(now); int dis[vertax][2]; memset(&dis[0][0],-1,sizeof(dis));

        while(! next.empty())
        {
            now = *next.begin(); next.erase(next.begin());

            int pCost = now.first.first;
            int pNode = now.first.second;
            int type = now.second;

            if(type == walk)
            {
                for(int i=0; i<adj[pNode].size(); i++)
                {
                    int cNode = adj[pNode][i].second;
                    int cCost = adj[pNode][i].first;
                    int tCost = pCost + cCost;

                    if(dis[cNode][walk]==-1 || dis[cNode][walk] > tCost)
                    {
                        dis[cNode][walk] = tCost;
                        now = make_pair(make_pair(tCost,cNode),ride);
                        next.insert(now);
                    }
                }
            }
            else if(type == ride)
            {
                for(int i=0; i<adj[pNode].size();i++)
                {
                    int cNode = adj[pNode][i].second;
                    int cCost = adj[pNode][i].first;
                    int tCost = pCost + cCost;

                    if(dis[cNode][ride]==-1 || dis[cNode][ride] > tCost)
                    {
                        dis[cNode][ride] = tCost;
                        now = make_pair(make_pair(tCost,cNode),walk);
                        next.insert(now);
                    }
                }
            }
        }
        printf("Set #%d\n",++counter);
        if(dis[vertax-1][ride] == -1) printf("?\n");
        else  printf("%d\n",dis[vertax-1][ride]);
    }
}
