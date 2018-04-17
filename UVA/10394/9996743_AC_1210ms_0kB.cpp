#include<bits/stdc++.h>
using namespace std;
vector<long>twins;
long n=100000000;
bool prime[100000000+1];
void sieve()
{

    memset(prime,true,sizeof(prime));
    for(long i=2;i<=sqrt(n);i++)
    {
        if(prime[i]==true)
        {
            for(long j=i*2;j<=n;j=i+j)
                prime[j]=false;
        }
    }
    for(long i=2;i<=n;i++)
    {
        if(prime[i] && prime[i+2])
        {
            twins.push_back(i);
        }
    }
}
int main()
{
    long i;sieve();
    while(cin>>i)
    {
        cout<<"("<<twins[i-1]<<", "<<twins[i-1]+2<<")"<<endl;
    }
    return 0;
}
