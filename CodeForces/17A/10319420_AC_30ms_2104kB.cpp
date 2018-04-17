#include<bits/stdc++.h>
using namespace std;
int store[10000];
int n=10000;
bool prime[10000+5];
void sieve()
{
    int k=0;
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==false)
        for(int j=i*i;j<=n;j+=i)
            prime[j]=true;
    }
    for(int i=2;i<=n;i++)
        if(prime[i]==false)
            store[k++]=i;
}
bool check(int n)
{
    n-=1;
    for(int i=0;store[i]+store[i+1]<=n;i++)
        if(store[i]+store[i+1]==n)
            return true;
    return false;
}
int main()
{
    sieve();
    int n,k;
    cin>>n>>k;
    for(int i=0;store[i]<=n;i++)
        if(check(store[i]))
            k--;
    cout<<(k<=0 ? "YES\n" : "NO\n");
}
