#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len; while(cin>>len && len!=0)
    {
        priority_queue<int>data;
        for(int i=0;i<len;i++)
        {
            int temp; cin>>temp;
            data.push(-temp);
        }
        int ans=0;
        for(int i=0;i<len-1;i++)
        {
            int sum1=-data.top(); data.pop();
            int sum2=-data.top(); data.pop();
            int temp=sum1+sum2;
            ans+=temp;
            data.push(-temp);
        }
        cout<<ans<<endl;
    }
}
