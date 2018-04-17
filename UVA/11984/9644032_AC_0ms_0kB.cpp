#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case; cin>>Case;
    for(int i=1;i<=Case;i++)
    {
        double c,d; cin>>c>>d;
        c+=((5*d)/9);
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<c<<endl;
    }
}
