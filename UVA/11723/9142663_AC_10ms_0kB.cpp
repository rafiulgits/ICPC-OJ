#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1;
    int r,d;
    while(cin>>r>>d)
    {
        if(r==0 && d==0)
            break;
        int Count=0;
        if(r%d==0)
            Count=(r/d)-1;
        else
            Count=r/d;
        if(Count<=26)
             cout<<"Case "<<i<<": "<<Count<<endl;
        else
            cout<<"Case "<<i<<": "<<"impossible"<<endl;
        i++;

    }
}
