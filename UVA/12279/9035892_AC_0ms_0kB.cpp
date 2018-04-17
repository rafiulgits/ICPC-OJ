#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,count=0;
    while(cin>>len)
    {
        int sum=0,data;
        if(len==0)
            break;
        else
        {
            for(int i=0;i<len;i++)
            {
                cin>>data;
                if(data>0)
                    sum++;
                else
                    sum--;
            }
        }
        cout<<"Case "<<++count<<": "<<sum<<endl;
    }
    return 0;
}
