#include<bits/stdc++.h>
using namespace std;
char con='"';
int main()
{
    string data;
    bool odd=true;
    while(getline(cin,data))
    {
        for(int i=0;i<data.size();i++)
        {
            if(data.at(i)==con)
            {
                if(odd)
                    cout<<("``");
                else
                    cout<<("''");
                odd=!odd;
            }
            else
                cout<<data.at(i);
        }
        cout<<endl;
    }
    return 0;
}
