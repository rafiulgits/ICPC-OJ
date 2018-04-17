#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len; cin>>len;
    int data[len];
    for(int i=0;i<len;i++) cin>>data[i];
    sort(data,data+len);
    int ans=data[len-1]-25;
    cout<<(ans>0 ? ans : 0)<<endl;
}
