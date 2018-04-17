#include<bits/stdc++.h>
using namespace std;
int main()
{
    int times,n,k,p,count=1,i;
    cin>>times;
    while(times--)
    {
        cin>>n>>k>>p;
        for(i=1;i<=p;i++)
        {
            k++;
            if(k>n)
                k=1;
        }
        cout<<"Case "<<count++<<": "<<k<<endl;
    }
    return 0;
}
