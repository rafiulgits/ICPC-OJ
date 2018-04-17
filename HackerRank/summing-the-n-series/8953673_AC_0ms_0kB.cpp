#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case;
    cin>>Case;
    int t=0;
    while(Case--)
    {
        long num,mod=pow(10,9)+7;
        cin>>num;
        num=num%mod;
        cout<<(num*num)%mod<<endl;
    }
    return 0;
}
