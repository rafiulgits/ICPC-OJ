#include<bits/stdc++.h>
using namespace std;

int main()
{
    string data; cin>>data;
    if(data.at(0)>=97)
        data.at(0)-=32;
    cout<<data<<endl;
}
