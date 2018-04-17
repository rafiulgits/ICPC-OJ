#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int dif,num1,num2;
    while(scanf("%lld %lld",&num1,&num2)!=EOF)
    {
        dif=abs(num1-num2);
        printf("%lld\n",dif);
    }
    return 0;
}
