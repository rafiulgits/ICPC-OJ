#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num>2)
    {
        for(int i=num;i>=2;i--)
            cout<<i<<" ";
            cout<<1<<endl;
    }
    else
        cout<<-1;
    return 0;
}
