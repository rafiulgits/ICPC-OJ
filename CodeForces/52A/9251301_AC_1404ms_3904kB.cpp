#include<bits/stdc++.h>
using namespace std;
int main()
{
    long len; while(cin>>len)
    {
        long data[len];
        int num[4]={0};
        for(int i=0;i<len;i++) cin>>data[i];
        for(int i=0;i<len;i++)
            num[data[i]]++;
        int Max=0;
        for(int i=0;i<4;i++)
        {
            if(num[i]>Max)
                Max=num[i];
        }
        cout<<(len-Max)<<endl; /// remove the max times element from total
    }
}
