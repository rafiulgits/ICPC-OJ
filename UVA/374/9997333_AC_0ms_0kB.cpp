#include<bits/stdc++.h>
using namespace std;
long BigMod(long b, long p, long m)
{
    if(p==0) return 1;
    else if(p%2==1)
        return ((b%m)*BigMod(b,p-1,m))%m;
    else if(p%2==0)
        return (BigMod(b,p/2,m)*BigMod(b,p/2,m))%m;
}
int main()
{
    long b,p,m;
    while(cin>>b>>p>>m)
        cout<<BigMod(b,p,m)<<endl;
}
