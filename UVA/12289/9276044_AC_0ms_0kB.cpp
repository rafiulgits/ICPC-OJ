#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case; cin>>Case; while(Case--)
    {
        string data; cin>>data;
        if(data.size()==5) cout<<"3"<<endl;
        else if(data.size()==3 && (data.at(0)=='o' || data.at(1)=='n')) cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
}
