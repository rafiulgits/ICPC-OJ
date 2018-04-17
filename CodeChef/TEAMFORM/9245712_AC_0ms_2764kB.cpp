#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case,n,m,u,v;
    cin>>Case;
    while(Case--)
    {
        cin>>n>>m;
        if(n<2*m)
            Case++;
        else
        {
            while(m--)
                cin>>u>>v;
            if(n%2==0)
                puts("yes");
            else
                puts("no");
        }
    }
}
