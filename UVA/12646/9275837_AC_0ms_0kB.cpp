#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c; while(cin>>a>>b>>c)
    {
        if((a==0 && (b==1 && c==1)) || (a==1 && (b==0 && c==0))) cout<<"A"<<endl;
        else if((b==0 && (a==1 && c==1)) || (b==1 && (a==0 && c==0))) cout<<"B"<<endl;
        else if((c==0 && (b==1 && a==1)) || (c==1 && (b==0 && a==0))) cout<<"C"<<endl;
        else cout<<"*"<<endl;
    }
}
