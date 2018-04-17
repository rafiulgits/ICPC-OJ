#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int times,rel,COUNT,i,j,dif,mid;
    cin>>times;
    for(i=0;i<times;i++)
    {
        COUNT=0;
        cin>>rel;
        int street[rel];
        for(j=0;j<rel;j++)
            cin>>street[j];
        std::sort(street,street+rel);
        mid=street[rel/2];
        for(j=0;j<rel;j++)
        {
            dif=0;
            dif=abs(mid-street[j]);
            COUNT+=dif;
        }
        printf("%d\n",COUNT);
    }
    return 0;
}

