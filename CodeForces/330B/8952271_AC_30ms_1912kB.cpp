#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,x[10000],count;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        x[a]=1;
        x[b]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(x[i]<1)
           {
               count=i;
               break;
           }
    }
    cout<<n-1<<endl;
    for(int i=1;i<=n;i++)
    {
        if(i!=count)
            cout<<i<<" "<<count<<endl;
    }
    return 0;
}
