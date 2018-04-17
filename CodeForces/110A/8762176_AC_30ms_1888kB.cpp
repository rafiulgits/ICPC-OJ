#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int data;
    int count=0;
    cin>>data;
    while(data!=0)
    {
        if(data%10==4 || data%10==7)
            count++;
        data/=10;
    }
    cout<<((count==4 || count==7)?"YES":"NO");
    return 0;
}
