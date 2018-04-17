#include<stdio.h>
int main()
{
    int times,i,data;
    scanf("%d",&times);
    for(i=1;i<=times;i++)
    {
        data=0;
        scanf("%d",&data);
        if(data>=80 && data<=100)
            printf("Case %d: A+\n",i);
        else if(data>=75 && data<=79)
            printf("Case %d: A\n",i);
        else if(data>=70 && data<=74)
            printf("Case %d: A-\n",i);
        else if(data>=65 && data<=69)
            printf("Case %d: B+\n",i);
        else if(data>=60 && data<=64)
            printf("Case %d: B\n",i);
        else if(data>=55 && data<=59)
            printf("Case %d: B-\n",i);
        else if(data>=50 && data<=54)
            printf("Case %d: C\n",i);
        else if(data>=45 && data<=49)
            printf("Case %d: D\n",i);
        else if(data>=0 && data<=44)
            printf("Case %d: F\n",i);
    }
    return 0;
}
