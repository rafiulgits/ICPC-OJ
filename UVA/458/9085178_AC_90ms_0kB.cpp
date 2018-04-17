#include<bits/stdc++.h>
using namespace std;
int main()
{
    string data;
    while(cin>>data)
    {
        for(int i=0;i<data.size();i++)
            data.at(i)-=7;
        for(int i=0;i<data.size();i++)
            cout<<data[i];
        cout<<endl;
    }
    return 0;
}
