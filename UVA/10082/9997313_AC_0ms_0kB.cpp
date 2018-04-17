#include<bits/stdc++.h>
using namespace std;
string base="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int indexOf(char x)
{
    for(int i=0;i<base.size();i++)
        if(base.at(i)==x)
            return i;
}
int main()
{
    string data; while(getline(cin,data))
    {
        for(int i=0;i<data.size();i++)
        {
            int index=indexOf(data.at(i));
            if(data.at(i)!=' ')
                data.at(i)=base.at(index-1);
        }
        cout<<data<<endl;
    }
}
