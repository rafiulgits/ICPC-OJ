#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,c; cin>>a>>b>>c;
   int sum1 = (a+b)*c;
   int sum2 =  a+b*c;
   int sum3 = a*(b+c);
   int sum4 = a*b+c;
   int sum5 = a*b*c;
   int sum6 = a+b+c;

   cout<<max(sum1,max(sum2,max(sum3,max(sum4,max(sum5,sum6))))) << endl;
}
