#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int Case; scanf("%d",&Case);
    for(int c=1; c<=Case; c++)
    {
        int len; int sig;
        scanf("%d %d",&len, &sig);

        int data[len];
        for(int i=0; i<len; i++)
            scanf("%d",&data[i]);

        printf("Case %d:\n",c);
        while(sig--)
        {
            int start; int stop;
            scanf("%d %d", &start,&stop);

            printf("%d\n",(upper_bound(data,data+len,stop)-
                           lower_bound(data,data+len,start)));
        }
    }
}
