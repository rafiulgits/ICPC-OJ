#include<bits/stdc++.h>
#define mp make_pair

using namespace std;
typedef pair<int,int>Pair;

int city; int roads; int query;

int Prim(vector<Pair>graph[], Pair travel);

int main()
{
    int Case = 1;
    while(cin >> city >> roads >> query)
    {
        if(!city && !roads && !query) break;

        if(Case > 1) puts("");
        printf("Case #%d\n",Case);

        vector<Pair>graph[city+2];
        for(int i=0; i<roads; i++)
        {
            int node1; cin >> node1;
            int node2; cin >> node2;
            int cost;  cin >> cost;

            graph[node1].push_back(mp(cost,node2));
            graph[node2].push_back(mp(cost,node1));
        }

        vector<Pair>queryData;
        for(int i=0; i<query; i++)
        {
            int node1; cin >> node1;
            int node2; cin >> node2;

            queryData.push_back(mp(node1, node2));
        }

        for(int i=0; i<query; i++)
        {
            int cost = Prim(graph, queryData[i]);
            if(cost == -1) puts("no path");
            else cout << cost << endl;
        }
        Case++;
    }
}
int Prim(vector<Pair>graph[], Pair travel)
{
    bool visit[city+2] = {false};
    int start = travel.first;
    int stop = travel.second;
    int maxCost = 0;
    multiset<Pair>next; next.insert(mp(maxCost,start));

    while(! next.empty())
    {
        int pNode = (*next.begin()).second;
        int pCost = (*next.begin()).first;
        next.erase(next.begin());

        maxCost = max(maxCost,pCost);
        if(pNode == stop) return maxCost;

        if(visit[pNode]) continue;
        visit[pNode] = true;

        for(int i=0; i<graph[pNode].size(); i++)
        {
            int cNode = graph[pNode][i].second;
            if(! visit[cNode])
                next.insert(graph[pNode][i]);
        }
    }
    return -1;
}
