#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,d;
    int i=1;
    while(cin>>r>>d)
    {
        if(r==0 & d==0)
            break;
        int Count=0;
        Count=r/d;
        if(Count<=26)
        {
            if(r%d==0)
                Count--;
            cout<<"Case "<<i<<": "<<Count<<endl;
        }
        else
            cout<<"Case "<<i<<": "<<"impossible"<<endl;
        i++;
    }
}
