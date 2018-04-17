#include<bits/stdc++.h>
using namespace std;

int main()
{
    string data;
    while(cin >> data)
    {
        for(int i=0; i<data.size();)
        {
            if(data.at(i)=='.')
            {
                cout<<0;
                i++;
            }
            else
            {
                if(data.at(i)=='-' && data.at(i+1)=='.')
                    cout<<1;
                else
                    cout<<2;
                i+=2;

            }
        }
        cout<<endl;
    }
}
