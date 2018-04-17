#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; while(cin>>a>>b)
    {
        if(!b) break;
        int Count=0;
        for(int i=a;i<=b;i++)
        {
            float temp=sqrt(i);
            if(temp==(int)temp)
                Count++;
        }
        cout<<Count<<endl;
    }
}
