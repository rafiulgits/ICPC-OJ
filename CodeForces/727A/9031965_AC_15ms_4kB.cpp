#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long flag,num;
    int count=0;
    vector<long long>factors;
    cin>>flag>>num;
    factors.push_back(num);
    while(num>flag)
    {
        if(num%2==0)
        {
            num/=2;
            factors.push_back(num);
        }
        else if((num-1)%10==0)
        {
            num/=10;
            factors.push_back(num);
        }
        else
            break;
    }
    if(factors[factors.size()-1]!=flag)
        cout<<"NO";
    else
    {
        cout<<"YES"<<endl<<factors.size()<<endl;
        for(int i=factors.size()-1;i>0;i--)
            cout<<factors[i]<<" ";
        cout<<factors[0];
    }
    return 0;
}
