#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ox,oy,x,y,i;
    while(scanf("%d",&n)!=EOF)
    {
        cin>>ox>>oy;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            if(ox==x || oy==y)
                cout<<"divisa"<<endl;
            else if(ox>x && oy>y)
                cout<<"SO"<<endl;
            else if(ox>x && oy<y)
                cout<<"NO"<<endl;
            else if(ox<x && oy>y)
                cout<<"SE"<<endl;
            else
                cout<<"NE"<<endl;
        }
    }
    return 0;
}
