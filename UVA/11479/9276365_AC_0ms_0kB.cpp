#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case; cin>>Case; for(int i=1;i<=Case;i++)
    {
        long long a,b,c; cin>>a>>b>>c;
        if(a+b<=c || b+c<=a || c+a<=b) cout<<"Case "<<i<<": Invalid"<<endl;
        else if(a==b && b==c) cout<<"Case "<<i<<": Equilateral"<<endl;
        else if(a==b || b==c || c==a) cout<<"Case "<<i<<": Isosceles"<<endl;
        else cout<<"Case "<<i<<": Scalene"<<endl;

    }
}
