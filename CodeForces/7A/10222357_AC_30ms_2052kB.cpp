#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>board;
    vector<string>data;
    for(int i=0;i<8;i++)
    {
        string temp; cin>>temp;
        board.push_back(temp);
    }
    for(int i=0;i<8;i++)
        if(board[i]!="BBBBBBBB")
            data.push_back(board[i]);
    int Count=abs(board.size()-data.size());
    if(data.size()!=0)
    {
        sort(data.begin(),data.end());
        string temp=data[0];
        for(int i=0;i<8;i++)
            if(temp[i]=='B')
                Count++;
    }
    cout<<Count<<endl;
}

