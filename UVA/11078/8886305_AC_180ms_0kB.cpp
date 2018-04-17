#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case;
    cin>>Case;
    while(Case--)
    {
        int len;
        cin>>len;
        int data[len];
        for(int i=0;i<len;i++)
            cin>>data[i];
        int flag=data[0];
        int dif=data[0]-data[1];
        for(int i=1;i<len;i++)
        {
            dif=max(dif,flag-data[i]);
            flag=max(flag,data[i]);
        }
        cout<<dif<<endl;
    }
}
