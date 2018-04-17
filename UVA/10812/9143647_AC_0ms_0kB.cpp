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
        x=abs(a-b)/2;
        y=a-x;
        if(x+y==a && (abs(x-y)==b))
            cout<<y<<" "<<x<<endl;
        else
            puts("impossible");
    }
}
