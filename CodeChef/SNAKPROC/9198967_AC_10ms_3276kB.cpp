#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case,len;
    cin>>Case;
    while(Case--)
    {
        cin>>len;
        char data[len];
        vector<char>snake;
        for(int i=0;i<len;i++)
            cin>>data[i];
        for(int i=0;i<len;i++)
        {
            if(data[i]=='H' || data[i]=='T')
                snake.push_back(data[i]);
        }
        int n=snake.size();
        int flag=1;
        if(n!=0)
        {
            if(snake[n-1]=='H')
                flag=0;
            else
            {

                for(int i=0;i<n;i++)
                {
                    if(i%2==1 && snake[i]=='T')
                        continue;
                    if(i%2==0 && snake[i]=='H')
                        continue;
                    else
                    {
                        flag=0;
                        break;
                    }
                }
            }
        }
        if(flag==1)
            puts("Valid");
        else
            puts("Invalid");

    }
}
