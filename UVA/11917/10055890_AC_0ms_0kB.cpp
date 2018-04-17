#include<bits/stdc++.h>
using namespace std;
map<string,int>data;
int main()
{
    int Case; cin>>Case; for(int c=1;c<=Case;c++)
    {
        data.clear();
        int Assignment_number; cin>>Assignment_number;
        while(Assignment_number--)
        {
            string name; int period;
            cin>>name>>period;
            data.insert(pair<string,int>(name,period));
        }
        int time; string subject;
        cin>>time>>subject;
        map<string,int>::iterator i=data.find(subject);
        cout<<"Case "<<c<<": ";
        if(i==data.end() || i->second>time+5)
            puts("Do your own homework!");
        else if(i->second<=time)
            puts("Yesss");
        else
            puts("Late");
    }
}

