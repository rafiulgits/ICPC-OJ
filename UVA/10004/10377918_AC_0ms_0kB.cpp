#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes; while(cin>>nodes && nodes!=0)
    {
        int edges; cin>>edges; vector<int>path[edges+10];
        for(int i=0;i<edges;i++)
        {
            int x,y; cin>>x>>y;
            path[x].push_back(y); path[y].push_back(x);
        }
        queue<int>check; check.push(0); int color[nodes]; memset(color,0,sizeof(color));
        color[0]=1; bool bicolor=true;
        while(!check.empty() && bicolor)
        {
            int Front=check.front(); check.pop(); int parentColor=color[Front];
            for(int i=0;i<path[Front].size();i++)
            {
                int temp=path[Front][i];
                if(color[temp]==0)
                {
                    switch(parentColor)
                    {
                        case 1: color[temp]=2; break;
                        case 2: color[temp]=1; break;
                    }
                    check.push(temp);
                }
                else
                {
                    if(color[temp]==parentColor)
                    {
                        bicolor=false;
                        break;
                    }
                }
            }
        }
        cout<<(bicolor? "BICOLORABLE.\n" : "NOT BICOLORABLE.\n" );
    }
}