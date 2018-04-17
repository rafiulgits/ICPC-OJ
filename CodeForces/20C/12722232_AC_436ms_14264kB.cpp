/*
CodeForces 20C
*/
#include<bits/stdc++.h>
#define INFINITE 9999999999999999

using namespace std;
typedef pair<int,int> Pair;
map<int,int>path;

void showPath(int node);

int main()
{
    int nodes; int edges;
    cin >> nodes >> edges;

    long long dis[nodes+10]; bool visit[nodes+10] = {false};
    vector<Pair>adjacent[nodes+10];

    for(int i=1, node1, node2, weight; i<=edges; i++)
    {
        cin >> node1 >> node2 >> weight;
        adjacent[node1].push_back(make_pair(weight,node2));
        adjacent[node2].push_back(make_pair(weight,node1));
    }

    /* fill all dis with infinite value */
    fill(dis, dis+nodes+1, INFINITE); path[1] = 1;

    /* priority_queue for min heap */
    priority_queue<Pair, vector<Pair>, greater<Pair> > next;

    /* insert this pair into heap and make node:1 dis = 0*/
    Pair now = make_pair(0,1); next.push(now); dis[1] = 0;

    while(! next.empty())
    {
        now = next.top(); next.pop();

        int nowNode = now.second;

        if(visit[nowNode]) continue;
        visit[nowNode] = true;

        for(int i=0, thisNode, thisWeight; i<adjacent[nowNode].size(); i++)
        {
            thisNode = adjacent[nowNode][i].second;
            thisWeight = adjacent[nowNode][i].first;

            if(dis[thisNode] > dis[nowNode]+thisWeight)
            {
                dis[thisNode] = dis[nowNode]+thisWeight;

                /* store the initial parent of this node*/
                path[thisNode] = nowNode;

                next.push(make_pair(dis[thisNode], thisNode));
            }
        }
    }
    if(dis[nodes] == INFINITE)
        cout << -1;
    else
        showPath(nodes);
    cout << endl;
}
void showPath(int node)
{
    if(node == path[node])
    {
        cout << 1<<" ";
        return;
    }
    showPath( path[node]);
    cout << node <<" ";
}
