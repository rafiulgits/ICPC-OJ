#include<stdio.h>
int main()
{
    int code1,code2;
    scanf("%d %d",&code1,&code2);
    if((code1%2==0) || (code2%2!=0))
        printf("yes");
    else
        printf("no");
    return 0;
}
