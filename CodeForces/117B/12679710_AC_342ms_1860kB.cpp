#include<bits/stdc++.h>
using namespace std;

#define base 1000000000
#define big long long

int main()
{
    int num1,num2,mod;
    cin >>num1>>num2>>mod;
    bool won = false;
    for(big i=0; i<=num1 && i<mod; i++)
    {
        if((mod - ((i*base)% mod))%mod > num2)
        {
            won = true;
            cout << 1 <<endl;
            for(int x = int(log10(i) ); x<8; x++)
                cout<<0;
            cout<<i<<endl;
            break;
        }

    }
    if(! won)
        cout << 2 <<endl;

}
