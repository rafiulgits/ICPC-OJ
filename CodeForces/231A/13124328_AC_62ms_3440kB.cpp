#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int counter = 0;
    int a,b,c;
    while(n--)
    {
        cin>>a>>b>>c;
        if(a+b+c <2)
            continue;
        counter++;
    }
    cout << counter << endl;
}
