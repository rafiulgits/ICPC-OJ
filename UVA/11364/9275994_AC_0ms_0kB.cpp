#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case; cin>>Case; while(Case--)
    {
        int len; cin>>len;
        int data[len]; for(int i=0;i<len;i++) cin>>data[i];
        sort(data,data+len); int dis=0;
        for(int i=1;i<len;i++) dis+=(data[i]-data[i-1]);
        cout<<(2*dis)<<endl; ///as because he go for shopping and return back; so two times he have to walk
    }
}
