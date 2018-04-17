#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len; scanf("%d",&len);
    int data[len+1];
    for(int i=0;i<len;i++)
        scanf("%d",&data[i]);
    if(len==1 || len==2)
        puts("0");
    else
    {
        int Counter=0;
        for(int i=0,j=i+1,k=j+1;j<len-1;i++,j++,k++)
        {
            if(data[j]>data[i] && data[j]>data[k])
                Counter++;
            else if(data[j]<data[i] && data[j]<data[k])
                Counter++;
        }
        printf("%d\n",Counter);
    }
}