
#include<stdio.h>
#include<string.h>
int main()
{
    char data[1000];
    int len,i,times;
    scanf("%d",&times);
    for(i=0;i<times;i++)
    {
        scanf("%s",data);
        len=strlen(data);
        if (!strcmp(data,"1") || !strcmp(data,"4") || !strcmp(data,"78"))
            printf("+\n");
        else if((data[len-1]=='5') && (data[len-2]=='3'))
            printf("-\n");
        else if(data[0]=='9' && data[len-1]=='4')
            printf("*\n");
        else
            printf("?\n");

    }
    return 0;
}

