#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n;
    string data[n];
    for(int i=0;i<n;i++)
        cin>>data[i];
    cin>>q;
    string user_data[q];
    for(int i=0;i<q;i++)
        cin>>user_data[i];
    for(int i=0;i<q;i++)
    {
        int Count=0;
        for(int j=0;j<n;j++)
        {
            if(user_data[i]==data[j])
                Count++;
        }
        cout<<Count<<endl;
    }
    return 0;
}
