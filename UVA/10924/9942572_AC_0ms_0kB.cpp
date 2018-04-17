#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
    if(num<1) return false;
    if(num==2 || num==1) return true;
    if(num%2==0) return false;
    for(int i=3;i<=sqrt(num);i++)
        if(num%i==0)
            return false;
    return true;
}
int main()
{
    string data;
    while(getline(cin,data))
    {
        int Count=0;
        for(int i=0;i<data.size();i++)
        {
            if(data.at(i)>='a' && data.at(i)<='z')
                Count+=(data.at(i)-'a'+1);
            else
                Count+=(data.at(i)-'A'+27);
        }
        if(isPrime(Count))
            puts("It is a prime word.");
        else
            puts("It is not a prime word.");
    }
}
