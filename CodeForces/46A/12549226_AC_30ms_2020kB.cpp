#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n; scanf("%d",&n);
    int base = 2;
    printf("%d",base);
    for(int i=2; i<n; i++)
    {
        int temp = (base+i);
        if(temp<=n)
            printf(" %d",temp);
        else
        {
            temp %= n;
            printf(" %d",temp);
        }
        base = temp;
    }
    printf("\n");
}