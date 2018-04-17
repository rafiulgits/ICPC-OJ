#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    while(scanf("%d",&len)!=EOF)
    {
        if(len==0)
            break;
        int age[len],i;
        for(i=0;i<len;i++)
            cin>>age[i];
        sort(age,age+len);
        for(i=0;i<(len-1);i++)
        {
            cout<<age[i]<<" ";
        }
        cout<<age[len-1]<<endl;
    }
    return 0;
}
