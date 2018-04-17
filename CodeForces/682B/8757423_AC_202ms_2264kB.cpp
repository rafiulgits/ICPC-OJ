#include<bits/stdc++.h>
using namespace std;
int main()
{
    int data[100000],len,i,j=1;
    cin>>len;
    for(i=0;i<len;i++)
        cin>>data[i];
    std::sort(data,data+len);
    for(i=0;i<len;i++)
    {
        if(data[i]>=j)
        j++;
    }
    cout<<j;
    return 0;
}
