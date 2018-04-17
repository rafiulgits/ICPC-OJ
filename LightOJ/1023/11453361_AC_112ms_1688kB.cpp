#include<bits/stdc++.h>
using namespace std;
int main()
{
    string source="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int Case; cin>>Case;
    for(int i=1;i<=Case;i++)
    {
        int len,per_len;; cin>>len>>per_len;
        string data=source.substr(0,len);
        cout<<"Case "<<i<<":"<<endl;
        do
        {
            cout<<data<<endl;
            per_len--;
        }
        while(next_permutation(data.begin(),data.end())&& per_len!=0);
    }
}
