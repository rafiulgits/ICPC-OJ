#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,count=0;
    cin>>len;
    int data[len];
    for(int i=0;i<len;i++)
    {
        cin>>data[i];
        count+=data[i];
    }
    int sum=(len*(len+1)/2);
    cout<<((sum==count)?"YES":"NO");
    cout<<endl;
    return 0;
}
