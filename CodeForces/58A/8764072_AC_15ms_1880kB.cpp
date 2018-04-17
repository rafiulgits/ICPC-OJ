#include<bits/stdc++.h>
using namespace std;
int main()
{
    char input[100],*data="hello";
    cin>>input;
    int len,i,count=0;
    len=strlen(input);
    for(i=0;i<len;i++)
    {
        if(input[i]==data[count])
            count++;
        if(count==5)
            break;
    }
    cout<<((count==5)?"YES":"NO");
    return 0;

}
