#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case=1;
    int len; while(cin>>len)
    {
        if(len==0) break;
        int data[len]; int sum=0;
        for(int i=0;i<len;i++)
        {
            cin>>data[i];
            sum+=data[i];
        }
        sum/=len; int Count=0;
        for(int i=0;i<len;i++)
            if(data[i]<sum)
                Count+=(sum-data[i]);;
        cout<<"Set #"<<Case<<endl<<"The minimum number of moves is "<<Count<<"."<<endl<<endl;
        Case++;
    }
}
