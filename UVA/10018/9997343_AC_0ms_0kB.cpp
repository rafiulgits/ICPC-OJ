#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num;
    int Case; cin>>Case; while(Case--)
    {
        int Count=0; cin>>num;
        while(1)
        {
            long long rev_num=0;
            long long temp=num;
            while(num!=0)
            {
                int remainder=num%10;
                rev_num=(rev_num*10)+remainder;
                num/=10;
            }
            if(rev_num==temp)
            {
                cout<<Count<<" "<<rev_num<<endl;
                break;
            }
            else
            {
                num=temp+rev_num;
                Count++;
            }
        }
    }

}
