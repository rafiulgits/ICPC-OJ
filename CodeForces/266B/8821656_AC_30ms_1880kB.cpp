#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i;
    cin>>n>>t;
    getchar();
    string data;
    cin>>data;
    while(t--)
    {
        for(i=0;i<n;i++)
        {
            if(data[i+1]=='G' && data[i]=='B')
            {
                data[i+1]='B';
                data[i]='G';
                ++i;
            }
        }
    }
    cout<<data;
    return 0;
}
