#include<bits/stdc++.h>
using namespace std;
const int len=3000005;
int app[len];
int order[len];
int seen[len];
int main()
{
    memset(app,0,sizeof(app));
    memset(seen,0,sizeof(seen));
    int event,Case;
    int unread=0,flag=1,i=0;
    cin>>event>>Case;
    while(Case--)
    {

        int con,num;
        cin>>con>>num;
        if(con==1)
        {
            ++app[num];
            unread++;
            order[++i]=num;
        }
        else if(con==2)
        {
            unread-=app[num];
            app[num]=0;
            seen[num]=i;
        }
        else
        {
            while(flag<=num)
            {
                if(flag>seen[order[flag]])
                {
                    unread--;
                    app[order[flag]]--;
                }
                flag++;
            }
        }
        cout<<unread<<endl;
    }
    return 0;
}
