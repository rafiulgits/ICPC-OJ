#include<bits/stdc++.h>
using namespace std;
main()
{
    int times,data,COUNT,flag,temp,i,j,chk;
    while(scanf("%d",&times)!=EOF)
    {
        COUNT=0;
        int dif[times];
        scanf("%d",&flag);
        for(i=0;i<(times-1);i++)
        {
            scanf("%d",&data);
            if(data>=flag)
                dif[i]=data-flag;
            else
                dif[i]=flag-data;
            flag=data;
        }
        sort(dif,dif+(times-1));
        for(i=1;i<=(times-1);i++)
        {
            if(dif[i-1]==i)
                COUNT++;
        }
        if(COUNT==times-1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
}
