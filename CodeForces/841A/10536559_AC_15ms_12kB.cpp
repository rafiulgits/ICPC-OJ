#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len, fr; cin>>len>>fr;
    string baloon; cin>>baloon;
    int data[28]={0}; bool upset=false;
    for(int i=0;i<len;i++)
    {
        int temp=baloon.at(i)-'a';
        data[temp]++;
        if(data[temp]>fr) upset=true;
    }
    cout<<(upset ? "NO\n" : "YES\n");
}
