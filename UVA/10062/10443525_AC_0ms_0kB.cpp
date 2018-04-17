#include<bits/stdc++.h>
using namespace std;
int main()
{
    string data;bool next=false; while(getline(cin,data))
    {
        int n=160; int Counter[n]={0};
        if(next) cout<<endl; next=true;
        if(!data.size()) continue;
        else
        {
            for(int i=0;i<data.size();i++)
            {
                int temp=data.at(i);
                Counter[temp]++;
            }
            for(int i=1;i<=data.size();i++)
                for(int j=n;j>=0;j--)
                    if(Counter[j]==i) cout<<j<<" "<<i<<endl;
        }
    }
}
