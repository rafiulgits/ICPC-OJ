#include<bits/stdc++.h>
using namespace std;
int main()
{

    int len; scanf("%d",&len);
    char data[len+1]; getchar();
    int u=0,d=0,r=0,l=0;
    for(int i=0;i<len;i++)
    {
        scanf("%c",&data[i]);
        switch(data[i])
        {
        case 'U': u++; break;

        case 'D': d++; break;

        case 'L': l++; break;

        case 'R': r++; break;
        }
    }
    int x=abs(u-d)+abs(r-l);
    printf("%d\n",len-x);
}