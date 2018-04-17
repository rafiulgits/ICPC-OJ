#include<bits/stdc++.h>
using namespace std;
int main()
{
    long num;
    while(cin>>num)
    {
        if(num<0)
            break;
        cout<<((num*(num+1))/2+1)<<endl;
    }
}
