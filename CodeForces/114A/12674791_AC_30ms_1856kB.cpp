#include<bits/stdc++.h>
using namespace std;

int getPower(int base, int ans);

int main()
{
    int base; int ans;

    while(cin >> base >> ans)
    {
        int power = getPower(base,ans);
        if(power != -1)
            cout << "YES"<<endl<<power<<endl;
        else
            cout<<"NO"<<endl;
    }

}
int getPower(int base, int ans)
{
    int power = 0;

    long long temp = base;
    while(true)
    {
        if(ans % base != 0)
            return -1;
        if(temp > ans)
            return -1;
        if(temp==ans)
            return power;

        temp *=base;
        power++;
    }
}
