#include<bits/stdc++.h>
using namespace std;
int main()
{
    int group; cin>>group;
    int room[7]={0};
    while(group--)
    {
        string data; cin>>data;
        for(int i=0;i<7;i++)
        {
            int temp=data.at(i)-'0';
            room[i]+=temp;
        }
    }
    cout<<*max_element(room,room+7)<<endl;
}
