#include<bits/stdc++.h>
using namespace std;
int main()
{
    long len,d,Count=0;
    cin>>len>>d;
    long data[len];
    for(int i=0;i<len;i++)
        cin>>data[i];
    for(int i=1;i<len;i++)
    {
        if(data[i]<=data[i-1])
        {
            long dif=data[i-1]-data[i];
            dif/=d;
            dif+=1; /// add one for making ceiling after divide
            Count+=dif;
            data[i]+=(dif*d);
        }
    }
    cout<<Count<<endl;

}
