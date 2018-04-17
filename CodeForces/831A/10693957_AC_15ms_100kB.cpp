#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len; cin>>len;
    int flag; cin>>flag;
    bool increase=false, decrease=false, level=false, Not=false;
    for(int i=1;i<len;i++)
    {
        int temp; cin>>temp;
        if(temp>flag)
        {
            increase=true;
            if(level || decrease) Not=true;
        }
        else if(temp==flag)
        {
            level=true;
            if(decrease) Not=true;
        }
        else decrease=true;
        flag=temp;
    }
    cout<<(Not?"NO\n":"YES\n");
}
