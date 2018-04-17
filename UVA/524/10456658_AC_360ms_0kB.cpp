#include<bits/stdc++.h>
using namespace std;
bool visit[18];
int data[18];
int stop;

void ring(int index, int lastValue);
bool isPrime(int n);
int main()
{
    int Case=1;
    while(cin>>stop)
    {
        memset(visit,false,sizeof(visit));
        data[0]=1;
        if(Case>1) cout<<endl;
        cout<<"Case "<<Case<<":"<<endl;
        ring(1,1);
        Case++;
    }
}
void ring(int index, int lastValue)
{
    if(index==stop && isPrime(lastValue+1))
    {
        for(int i=0; i<stop-1; i++)
            cout<<data[i]<<" ";
        cout<<data[stop-1]<<endl;
        return;
    }
    for(int i=2; i<=stop; i++)
    {
        if(visit[i]) continue;
        if(!visit[i] && isPrime(lastValue+i))
        {
            visit[i]=true;
            data[index]=i;
            ring(index+1,i);
            visit[i]=false;
        }
    }
}
bool isPrime(int n)
{
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3; i<=sqrt(n); i++)
        if(n%i==0) return false;
    return true;
}
