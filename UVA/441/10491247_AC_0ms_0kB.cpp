#include<bits/stdc++.h>
using namespace std;
int len; int stop=6+1;
int data[16]; int store[10];
void recall(int pos1, int pos2);
int main()
{
    bool next=false; while(cin>>len && len!=0)
    {
        if(next) cout<<endl;
        for(int i=1;i<=len;i++) cin>>data[i];
        recall(0,1);
        next=true;
    }
}
void recall(int pos1, int pos2)
{
    store[pos2]=data[pos1];
    if(pos2==stop)
    {
        for(int i=2;i<stop;i++)
            cout<<store[i]<<" ";
        cout<<store[stop]<<endl;
    }
    else
    {
        for(int i=pos1+1;i<=len;i++)
            recall(i,pos2+1);
    }
}
