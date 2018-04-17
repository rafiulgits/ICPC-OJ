#include<bits/stdc++.h>
using namespace std;
int main()
{
    int times;
    cin>>times;
    while(times--)
    {
        long n1,n2;
        cin>>n1>>n2;
        if(n1>n2)
            cout<<">"<<endl;
        else if(n1<n2)
            cout<<"<"<<endl;
        else
            cout<< "="<<endl;
    }
    return 0;
}
