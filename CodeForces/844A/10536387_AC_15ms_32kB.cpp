#include<bits/stdc++.h>
using namespace std;
int main()
{
    string data; cin>>data; int dif; cin>>dif;
    int len=data.size();
    if(dif>len) cout<<"impossible"<<endl;
    else
    {
        list<char>store;
        for(int i=0;i<len;i++)
        {
            char temp=tolower(data[i]);
            store.push_back(temp);
        }
        store.sort();
        store.unique();
        int ans=dif-store.size();
        cout<<(ans>=0 ? ans : 0); cout<<endl;
    }
}
