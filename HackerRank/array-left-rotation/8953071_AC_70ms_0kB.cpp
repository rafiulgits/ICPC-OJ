#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,rot;
    cin>>len>>rot;
    int data[len];
    for(int i=0;i<len;i++)
        cin>>data[i];
    for(int i=rot;i<len;i++)
        cout<<data[i]<<" ";
    for(int i=0;i<rot-1;i++)
        cout<<data[i]<<" ";
    cout<<data[rot-1]<<endl;
    return 0;
}
