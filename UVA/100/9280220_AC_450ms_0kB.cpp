/* i consider number1 is big and run a cycle
from number1 to number2 and find a max cycle
between this two numbers */

#include<stdio.h>
main()
{
    int num1,num2,temp,temp1,flag,MAX;
    while(scanf("%d %d",&num1,&num2)!=EOF)
    {
        MAX=0;
        printf("%d %d ",num1,num2);
        if(num2>num1)
        {
            temp=num1;
            num1=num2;
            num2=temp;
        }
        while(num2<=num1)
        {
            temp1=num2;
            flag=1; //this number is also a factor.so flag value is one
            while(temp1!=1)
            {
                if(temp1%2==0)
                    temp1=temp1/2;
                else
                    temp1=(temp1*3)+1;
                flag++;
            }
            if(MAX<flag)
                MAX=flag;
            num2++;
        }
        printf("%d\n",MAX);
    }
}

