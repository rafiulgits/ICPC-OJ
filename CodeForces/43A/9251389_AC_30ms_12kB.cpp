#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len; while(cin>>len)
    {
        getchar();
        vector<string>team1;
        vector<string>team2;
        string flag; cin>>flag;
        team2.push_back(flag);
        for(int i=1;i<len;i++)
        {
            string temp;
            cin>>temp;
            if(temp!=flag)
                team1.push_back(temp);
            else
                team2.push_back(temp);
        }
        if(team1.size()>team2.size())
            cout<<team1[0]<<endl;
        else
            cout<<team2[0]<<endl;
    }
}