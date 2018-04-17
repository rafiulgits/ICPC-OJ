#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,l;
    while(cin>>a>>b>>c>>d>>l)
    {
        if(d==0)
            break;
        int Count=0;
        for(int i=0;i<=l;i++)
        {
            long fvalue;
            fvalue=a*i*i+b*i+c;
            if(fvalue%d==0)
                Count++;
        }
        cout<<Count<<endl;
    }
}
