#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case; cin>>Case;
    for(int c=1;c<=Case;c++)
    {
        int len; cin>>len;
        int data[len];
        for(int i=0;i<len;i++)
            cin>>data[i];
        sort(data,data+len);
        cout<<"Case "<<c<<": "<<data[len-1]<<endl;
    }
}
