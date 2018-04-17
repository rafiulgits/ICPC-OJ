#include<bits/stdc++.h>
using namespace std;
main()
{
    string d1,d2;
    while(cin>>d1>>d2)
    {
        for(int i=0;i<d1.size();i++)
        {
            d1.at(i)=toupper(d1.at(i));
            d2.at(i)=toupper(d2.at(i));
        }
        int i=d1.compare(d2);
        cout<<i<<endl;
    }
}