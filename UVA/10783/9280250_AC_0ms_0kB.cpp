#include<bits/stdc++.h>
using namespace std;
int main()
{
    int times,count=1;;
    cin>>times;
    while(times--)
    {
        int sp,ep,sum=0;
        cin>>sp>>ep;
        for(int i=sp;i<=ep;i++)
        {
            if(i%2!=0)
                sum+=i;
        }
        cout<<"Case "<<count<< ": "<< sum<<endl;
        count++;
    }
}
