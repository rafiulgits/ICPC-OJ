#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case; cin>>Case; while(Case--)
    {
        int len; cin>>len; int data[len];
        for(int i=0;i<len;i++) cin>>data[i];
        float sum=0; for(int i=0;i<len;i++) sum+=data[i];
        sum/=len; float Count=0;
        for(int i=0;i<len;i++)
        {
            if(data[i]>sum) Count++;
        }
        Count=(Count/len)*100;
        cout<<fixed<<setprecision(3)<<Count<<"%"<<endl;
    }
}
