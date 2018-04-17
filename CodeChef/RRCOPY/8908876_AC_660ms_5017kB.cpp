#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case; cin>>Case;
    while(Case--)
    {
        int len,Count=0;
        cin>>len;
        int data[len];
        for(int i=0;i<len;i++)
            cin>>data[i];
        list<int>ldata(data,data+len);
        ldata.sort();
        ldata.unique();
        cout<<ldata.size() <<endl;
    }
    return 0;
}
