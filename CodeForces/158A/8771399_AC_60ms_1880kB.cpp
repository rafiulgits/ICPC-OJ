#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,count=0;
    cin>>n>>k;
    int data[n];
    for(i=0;i<n;i++)
        cin>>data[i];
    for(i=0;i<n;i++)
    {
        if(data[i]>=data[k-1] && data[i]>0)
            count++;
    }
    cout<<count;
    return 0;

}
