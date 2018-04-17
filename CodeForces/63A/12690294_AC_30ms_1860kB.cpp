#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len; cin>>len;
    vector<string>rat;
    vector<string>wAndc;
    vector<string>man;
    vector<string>captain;

    string name,pos;
    for(int i=0; i<len; i++)
    {
        cin>>name>>pos;
        if(pos=="rat")
            rat.push_back(name);
        else if(pos=="child" || pos=="woman")
            wAndc.push_back(name);
        else if(pos=="man")
            man.push_back(name);
        else
            captain.push_back(name);
    }

    for(int i=0; i<rat.size(); i++)
        cout<<rat.at(i)<<endl;
    for(int i=0; i<wAndc.size(); i++)
        cout<<wAndc.at(i)<<endl;
    for(int i=0; i<man.size(); i++)
        cout<<man.at(i)<<endl;
    for(int i=0; i<captain.size();i++)
        cout<<captain.at(i)<<endl;

}
