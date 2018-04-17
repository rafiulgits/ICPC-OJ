#include<bits/stdc++.h>
using namespace std;
int main()
{
    string data; while(cin>>data)
    {
        if(data=="0") break;
        int Count=0;
        for(int i=0;i<data.size();i++)
        {
            Count=(Count*10)+(data.at(i)-'0');
            Count%=11;
        }
        if(Count==0) cout<<data<<" is a multiple of 11."<<endl;
        else cout<<data<<" is not a multiple of 11."<<endl;
    }
}
