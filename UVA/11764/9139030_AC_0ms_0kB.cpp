#include<bits/stdc++.h>
using namespace std;
int main()
{
    int times,i,len,count=1;
    cin>>times;
    while(times--)
    {
        int low=0,high=0;
        cin>>len;
        int data[len];
        for(i=0;i<len;i++)
            cin>>data[i];
        for(i=1;i<len;i++)
        {
            if(data[i]>data[i-1])
                high++;
            if(data[i-1]>data[i])
                low++;
        }
        cout<<"Case "<<count++<<": "<<high<<" "<<low<<endl;
    }
    return 0;
}
