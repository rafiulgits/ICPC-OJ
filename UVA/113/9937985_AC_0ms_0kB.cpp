#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,p;
    while(cin>>n>>p)
    {
        double result=pow(p,1/n);
        cout<<fixed<<setprecision(0)<<result<<endl;
    }
        //printf("%.0lf\n",pow(p,(1/n)));
}
