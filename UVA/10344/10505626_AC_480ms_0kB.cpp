#include<bits/stdc++.h>
using namespace std;
int len=5; int data[10];
bool visited[30]; bool possible;
void recall(int pos,int result);
int main()
{
    while(cin>>data[0]>>data[1]>>data[2]>>data[3]>>data[4])
    {
        if(data[0]+data[1]+data[2]+data[3]+data[4]==0) break;
        memset(visited,false,sizeof(visited));
        possible=false;
        for(int i=0;i<len;i++)
        {
            visited[i]=true;
            recall(1,data[i]);
            visited[i]=false;
        }
        cout<<(possible ? "Possible\n" : "Impossible\n");
    }
}
void recall(int pos,int result)
{
    if(pos==len)
    {
        if(result==23) possible=true;
        return;
    }
    else
    {
        for(int i=0;i<len;i++)
            if(!visited[i])
            {
                visited[i]=true;
                recall(pos+1,result+data[i]);
                recall(pos+1,result-data[i]);
                recall(pos+1,result*data[i]);
                visited[i]=false;
            }
    }
}
