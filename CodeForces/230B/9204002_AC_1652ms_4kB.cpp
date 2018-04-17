#include<bits/stdc++.h>
using namespace std;
int prime(long long n);
int main()
{
   int Case;
   cin>>Case;
   while(Case--)
   {
       long long num;
       cin>>num;
       long long temp=sqrt(num);
       if(temp*temp==num && prime(temp)==1)
            puts("YES");
       else
            puts("NO");
   }
}
int prime(long long n)
{
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(int i=3;i<=sqrt(n);i=i+2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
