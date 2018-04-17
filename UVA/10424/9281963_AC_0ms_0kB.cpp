///love calculator

#include<bits/stdc++.h>
using namespace std;
void ans(int a,int b);
void digitsum(int n1,int n2);
int main()
{
    string n1,n2;
    while(getline(cin,n1) && getline(cin,n2))
    {
        int s1=0,s2=0;
        for(int i=0;i<n1.size();i++)
        {
            if((n1.at(i)>='a' && n1.at(i)<='z')||(n1.at(i)>='A' && n1.at(i)<='Z'))
            {
                char temp=toupper(n1.at(i));
                s1+=(temp-64);
            }
        }
        for(int i=0;i<n2.size();i++)
        {
            if((n2.at(i)>='a' && n2.at(i)<='z')||(n2.at(i)>='A' && n2.at(i)<='Z'))
            {
                char temp=toupper(n2.at(i));
                s2+=(temp-64);
            }
        }
        digitsum(s1,s2);
    }
}
void digitsum(int n1,int n2)
{
    int i,sum1=0,sum2=0;
    while(n1!=0)
    {
        sum1+=(n1%10);
        n1/=10;
    }
    while(n2!=0)
    {
        sum2+=(n2%10);
        n2/=10;
    }
    if(sum1>9) sum1%=9; //sum must be in decimal digit
    if(sum2>9) sum2%=9;
    if(sum1>sum2) swap(sum1,sum2);
    float total=(float)sum1*100/sum2;
    cout<<setprecision(2)<<fixed<<total<<" %"<<endl;
}
