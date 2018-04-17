#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name[100];
    int i,len,count=0;
    cin>>name;
    len=strlen(name);
    sort(name,name+len);
    for(i=0;i<len;i++)
    {
        if(name[i]!=name[i+1])
            count++;
    }
    if(count%2==0)
        cout<<"CHAT WITH HER!" ;
    else
        cout<<"IGNORE HIM!";
    return 0;

}
