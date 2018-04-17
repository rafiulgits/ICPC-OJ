#include<bits/stdc++.h>
using namespace std;
char con='"';
int main()
{
    string data;
    bool open=true;
    while(getline(cin,data))
    {
        for(int i=0;i<data.size();i++)
        {
            if(data.at(i)==con)
            {
                if(open)
                    cout<<("``");
                else
                    cout<<("''");
                open=!open;
            }
            else
                cout<<data.at(i);
        }
        cout<<endl;
    }
    return 0;
}
