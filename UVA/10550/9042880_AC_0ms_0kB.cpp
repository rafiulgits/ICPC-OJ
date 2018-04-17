#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n1,n2,n3,n4;
    while(cin>>n1>>n2>>n3>>n4)
    {
        if(n1+n2+n3+n3==0)
            break;
        else
        {
            long sum=((n1-n2+40)%40+(n3-n2+40)%40+(n3-n4+40)%40);
            cout<<(360*3)+(sum*9)<<endl;
        }
    }
}
