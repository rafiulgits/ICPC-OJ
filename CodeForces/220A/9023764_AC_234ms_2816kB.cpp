#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin>>len;
    int data[len],store[len];
    for(int i=0;i<len;i++)
        cin>>data[i];
    for(int i=0;i<len;i++)
        store[i]=data[i];
    sort (store,store+len);
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(data[i]!=store[i])
            count++;
    }
    cout<<(count>2? "NO": "YES");
    return 0;
}
