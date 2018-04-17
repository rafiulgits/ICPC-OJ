#include<bits/stdc++.h>
using namespace std;
map<string,int>data;
int main()
{
    int Case; cin>>Case;
    getchar();
    getchar();
    while(Case--)
    {
        data.clear();
        int total=0; string name;
        while(getline(cin,name) && name!="")
        {
            data[name]++;
            total++;
        }
        map<string,int>::iterator i;
        for(i=data.begin();i!=data.end();i++)
        {
            cout<<i->first<<" ";
            float Count=(float(i->second)/total)*100;
            cout<<fixed<<setprecision(4)<<Count<<endl;
        }
        if(Case!=0) cout<<endl;
    }
}
