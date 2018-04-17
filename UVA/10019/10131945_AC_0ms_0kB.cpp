#include<bits/stdc++.h>
using namespace std;
long HexaToDecimal(long num)
{
    long i=0;
    long sum=0;
    while(num!=0)
    {
        int temp=num%10;
        sum+=(temp*pow(16,i));
        num/=10;
        i++;
    }
    return sum;
}
int BinaryCount(long num)
{
    int Count=0;
    while(num!=0)
    {
        int mod=num%2;
        if(mod==1)
            Count++;
        num/=2;
    }
    return Count;

}
int main()
{
   int Case; cin>>Case; while(Case--)
   {
       long num; cin>>num;
       cout<<BinaryCount(num)<<" ";
       num=HexaToDecimal(num);
       cout<<BinaryCount(num)<<endl;
   }
}
