#include<bits/stdc++.h>
using namespace std;
int main()
{
    string data; while(cin>>data)
    {
        int l=0,u=0;
        for(int i=0;i<data.size();i++)
        {
            if(data.at(i)>='a' && data.at(i)<='z')
                l++;
            else
                u++;
        }
        if(u>l)
        {
            transform(data.begin(),data.end(),data.begin(),(int(*)(int))toupper);
            cout<<data<<endl;
        }
        else
        {
            transform(data.begin(),data.end(),data.begin(),(int (*)(int)) tolower);
            cout<<data<<endl;
        }
    }
}
