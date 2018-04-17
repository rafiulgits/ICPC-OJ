#include<stdio.h>
int main()
{
    long int b,p;
    while(scanf("%ld",&b)==1)
    {
        if(b!=0)
        {
            long int i,x=0,y=1,p=0;
            for(i=1;i<=b;i++)
            {
                p=x+y;
                x=y;
                y=p;
            }
            printf("%ld\n",p);
        }
        else
            break;
    }
    return 0;
}
