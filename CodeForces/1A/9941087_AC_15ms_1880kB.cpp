#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n1,n2,n3;
    cin>>n1>>n2>>n3;
    cout<<((n1+n3-1)/n3)*((n2+n3-1)/n3);
    return 0;
}
