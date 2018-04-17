#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c; while(cin>>r>>c)
    {
        char data[r][c];
        bool flag=true;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                cin>>data[i][j];
        }
        for(int i=0;i<r;i++)
        {
            char temp=data[i][0];
            for(int j=0;j<c;j++)
            {
                if(data[i][j]!=temp)
                {
                    flag=false;
                    break;
                }
            }
            if(data[i+1][0]==temp || flag==false)
            {
                flag=false;
                break;
            }
        }
        if(flag) puts("YES");
        else puts("NO");
    }
}
