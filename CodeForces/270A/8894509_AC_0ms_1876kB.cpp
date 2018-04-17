#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case;
    cin>>Case;
    while(Case--)
    {
        int data;
        cin>>data;
        cout<<((360%(180-data)==0)?"YES":"NO");
        cout<<endl;
    }
    return 0;
}
