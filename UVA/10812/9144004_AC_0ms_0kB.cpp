#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case;
    cin>>Case;
    while(Case--)
    {
        int a,b,x,y;
        cin>>a>>b;
        int m=max(a,b);
        x=(a+b)/2;
        y=(a-b)/2;
        if(x+y!=m)
            puts("impossible");
        else
            cout<<x<<" "<<y<<endl;
    }
}
