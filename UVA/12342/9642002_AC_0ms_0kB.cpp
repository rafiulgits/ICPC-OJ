#include<bits/stdc++.h>
using namespace std;
int main()
{
    long Case; cin>>Case;
    for(int i=1;i<=Case;i++)
    {
        long long tk; cin>>tk;
        long long tax=0;
        tk-=180000;
        if(tk>0)
        {
            tax+=tk*10;
            tk-=300000;
            if(tk>0)
            {
                tax+=tk*5;
                tk-=400000;
                if(tk>0)
                {
                    tax+=tk*5;
                    tk-=300000;
                    if(tk>0)
                        tax+=tk*5;
                }
            }
        }
        if(tax%100!=0)
            tax+=(100-(tax%100));
        else
            tax-=tax%100;
        tax/=100;
        if(tax>0 && tax<2000) tax=2000;

        cout<<"Case "<<i<<": "<<(int)tax<<endl;
    }
}
