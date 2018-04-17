#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n<2) return false ;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
    int num; while(cin>>num)
    {
        int temp,i;
        if(num==0) break;
        for(i=2;i<num;i++)
            if(isPrime(i) && isPrime(num-i))
                break;
        cout<<num<<" = "<<i<<" + "<<num-i<<endl;
    }
}
