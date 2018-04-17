#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len; while(cin>>len)
    {
        int flag; cin>>flag; int temp;
        for(int i=1;i<len;i++)
        {
            cin>>temp;
            if(temp>flag) flag=temp;
        }
        flag-=25;
        cout<<(flag>0?flag:0)<<endl;
    }
}
