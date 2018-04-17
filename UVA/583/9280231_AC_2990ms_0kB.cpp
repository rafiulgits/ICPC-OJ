#include<bits/stdc++.h>
using namespace std;
int is_prime(int n)
{
    if(n<=1)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
    long long num;
    vector<long>f;
    while(scanf("%lld",&num)!=EOF)
    {
        f.clear();
        if(num==0)
            break;
       cout<<num<<" = ";
       int i=2,p;
       p=is_prime(abs(num));
       if(p==1 || num==1 || num==-1)
       {
           cout<< (num<0? "-1 x " :"");
           cout<<abs(num);
       }
       else
       {
           cout<< (num<0? "-1 x " : "");
           while(abs(num)!=1)
           {
               if(num%i==0)
               {
                   f.push_back(i);
                   num/=i;
               }
               else
                i++;
           }
        for(int i=0;i<f.size()-1;i++)
            cout<<f[i]<<" x ";
            cout<<f[f.size()-1];
       }

       cout<<endl;
    }
    return 0;
}

