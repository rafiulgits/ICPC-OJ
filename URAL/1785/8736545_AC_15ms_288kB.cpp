#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num>=1 && num<=4)
        printf("few");
    else if(num>=5 && num<=9)
        printf("several");
    else if(num>=10 && num<=19)
        printf("pack");
    else if(num>=20 && num<=49)
        printf("lots");
    else if(num>=50 && num<=99)
        printf("horde");
    else if(num>=100 && num<=249)
        printf("throng");
    else if(num>=250 && num<=499)
        printf("swarm");
    else if(num>=500 && num<=999)
        printf("zounds");
    else
        printf("legion");
    return 0;
}
