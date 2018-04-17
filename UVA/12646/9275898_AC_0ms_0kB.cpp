#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c; while(cin>>a>>b>>c)
    {
        if((!a&&b&&c)||(a&&!b&&!c))cout<<"A"<<endl;
        else if((!b&&a&&c)||(b&&!a&&!c))cout<<"B"<<endl;
        else if((!c&&a&&b)||(c&&!a&&!b))cout<<"C"<<endl;
        else cout<<"*"<<endl;
    }
}
