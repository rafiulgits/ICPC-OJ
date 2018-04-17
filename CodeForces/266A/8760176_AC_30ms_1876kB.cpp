#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,i,count=0;
    cin>>len;
    char data[len];
    getchar();
    cin>>data;
    for(i=1;i<len;i++)
    {
        if(data[i]==data[i-1])
            count++;
    }
    cout<<count;
    return 0;
}
