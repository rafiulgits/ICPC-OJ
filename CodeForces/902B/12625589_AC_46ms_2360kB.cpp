#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nodes; cin>>nodes;

    int colorOf[nodes+1] = {0};
    map<int,int>parent;

    /* connect the nodes*/
    parent[1] = 1;
    for(int child=2,root; child<=nodes; child++)
    {
        cin>>root;
        parent[child] = root;
    }

    /* color filling*/
    int Counter = 1;
    for(int index=1,color; index<=nodes; index++)
    {
        cin>>color; colorOf[index] = color;

        if(colorOf[index] != colorOf[parent[index]])
            Counter++;
    }
    cout<<Counter<<endl;
}
