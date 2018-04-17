#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int base = 2; cout<<base;
    for(int i=2; i<n; i++)
    {
        if(base+i <= n)
        {
            cout<<" "<<base+i;
            base+=i;
        }
        else
        {
            cout<<" "<<(base+i)%n;
            base = (base+i)%n;
        }
    }
    cout<<endl;
}
