#include<stdio.h>
int main()
{
    int times,num1,num2,num3,sum,i;
    scanf("%d",&times);
    for(i=1;i<=times;i++)
    {
        scanf("%d %d %d",&num1,&num2,&num3);
        sum=num1+num2+num3;
        printf("Case %d: Sum of %d, %d and %d is %d\n",i,num1,num2,num3,sum);
    }
    return 0;
}
