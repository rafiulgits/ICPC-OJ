#include<bits/stdc++.h>
using namespace std;
int main()
{
    char data1[1000],data2[1000],exp;
    while(cin>>data1>>exp>>data2)
    {
        long double d1,d2;
        d1=atof(data1);
        d2=atof(data2);
        long mx=2147483647;
        cout<<data1<<" "<<exp<<" "<<data2<<endl;
        if(d1>mx)
            cout<<"first number too big"<<endl;
        if(d2>mx)
            cout<<"second number too big"<<endl;
        if(exp=='+')
        {
            if(d1+d2>mx)
                cout<<"result too big"<<endl;
        }
        if(exp=='*')
        {
            if(d1*d2>mx)
                cout<<"result too big"<<endl;
        }
    }
    return 0;

}
