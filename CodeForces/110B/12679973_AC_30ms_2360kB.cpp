#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    while(cin>>len)
    {
        string data = "abcd";

        while(data.size() < len)
            data += data;

        for(int i=0; i<len; i++)
            cout<<data.at(i);
        cout<<endl;
    }
}
