#include<bits/stdc++.h>
using namespace std;
int main()
{
    int times,i,len,sum;
    char data[100];
    cin>>times;
    while(times--)
    {
        cin>>data;
        len=strlen(data);
        if(len>10)
            sum=len-2;
        if(len>10)
            cout<<data[0]<<sum<<data[len-1]<<endl;
        else
            cout<<data<<endl;
    }
    return 0;
}