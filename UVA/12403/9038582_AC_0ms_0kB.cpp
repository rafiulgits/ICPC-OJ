#include<bits/stdc++.h>
using namespace std;
int money=0;
void donate()
{
    int dmoney;
    cin>>dmoney;
    money+=dmoney;
}
void balance()
{
    cout<<money<<endl;
}
int main()
{
    int times;
    cin>>times;
    while(times--)
    {
        string call;
        cin>>call;
        if(call.compare("donate")==0)
            donate();
        else
            balance();
    }
}
