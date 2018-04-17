#include<bits/stdc++.h>
using namespace std;
int main()
{
    int days; cin>>days; int data[days];
    for(int i=0;i<days;i++) cin>>data[i];
    if(days==2) cout<<data[1]-(data[0]-data[1])<<endl;
    else
    {
        int dif=data[0]-data[1];
        bool flag=true;
        for(int i=0;i<days-1;i++)
        {
            int temp=data[i]-data[i+1];
            if(temp!=dif)
            {
                cout<<data[days-1]<<endl;
                flag=false; break;
            }
        }
        if(flag) cout<<data[days-1]-dif<<endl;
    }
}
