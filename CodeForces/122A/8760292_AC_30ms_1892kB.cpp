#include<bits/stdc++.h>
using namespace std;
int main()
{
    char data[10000];
    int i,len,flag=0,num;
    gets(data);
    len=strlen(data);
    istringstream(data)>>num;
    for(i=0;i<len;i++)
    {
        if(data[i]=='4'||data[i]=='7')
            flag++;
    }
    if(flag==len)
        cout<<"YES";
    else if(num%4==0||num%7==0||num%47==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;

}
