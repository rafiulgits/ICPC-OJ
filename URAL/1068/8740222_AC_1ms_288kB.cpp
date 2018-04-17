#include<stdio.h>
int main()
{
    long long int num,sum=0;
    scanf("%lld",&num);
    if(num>0)
    {
        sum=num*(num+1)/2;
    }
    else if(num<=0)
    {
        sum=num*(num-1)/2*(-1);
        sum=sum+1;
    }
    printf("%lld\n",sum);

}
