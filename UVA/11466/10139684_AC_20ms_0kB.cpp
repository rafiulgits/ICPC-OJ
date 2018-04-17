#include<bits/stdc++.h>
using namespace std;
long LargestPrimeDivisor(long long num)
{
    int Count=0; ///count for prime divisor
    long long largePrime;
    for(unsigned long i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            Count++;
            while(num%i==0)
                num/=i;
        }
        largePrime=i;
    }
    if(num>1) /// checking is remaining number greater than the prime factor
    {
        largePrime=max(num,largePrime);
        Count++;
    }
    if(Count<=1)
        return -1;
    return largePrime;
}
int main()
{
    long long num;
    while(cin>>num && num!=0)
    {
        if(num<0) num*=-1; /// making the number positive
        cout<<LargestPrimeDivisor(num)<<endl;
    }
}

