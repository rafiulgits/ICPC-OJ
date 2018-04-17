#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case,n,p,q;
    cin>>Case;
    for(int j=1;j<=Case;j++)
    {
        cin>>n>>p>>q;
        int w[n];
        for(int i=0;i<n;i++)
            cin>>w[i];
        int Count=0,tw=0;
        for(int i=0;i<n;i++)
        {
            if(Count+1<=p && tw+w[i]<=q)
            {
                Count++;
                tw+=w[i];
            }
            else
                break;
        }
        cout<<"Case "<<j<<": "<<Count<<endl;
    }

}
