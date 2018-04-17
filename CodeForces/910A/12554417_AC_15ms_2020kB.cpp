#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len, maxJump;
    while(cin>>len>>maxJump)
    {
        string way; cin>>way;

        vector<int>data;

        for(int i=1; i<len; i++)
        {
            if(way.at(i) == '1')
                data.push_back(i);
        }

        int now = 0, jump = 0, flag = 0;

        for(int i=0; i<data.size(); )
        {
            if(data.at(i) - now <= maxJump)
            {
                flag = data.at(i);
                i++;
            }
            else if(data.at(i) - now > maxJump &&  flag - now != 0)
            {
                now = flag;
                jump++;
            }
            else
            {
                jump = -1;
                break;
            }
        }
        if(data.at(data.size()-1) - now <= maxJump)
            jump++;
        cout<<jump<<endl;
    }
}
