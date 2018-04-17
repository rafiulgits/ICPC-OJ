#include<bits/stdc++.h>
using namespace std;
int main()
{
    string data;
    int count=1;
    while(true)
    {
        cin>>data;
        if(data.compare("#")==0)
            return 0;
        cout<<"Case "<<count<<": ";
        if(data.compare("HELLO")==0 )
            cout<<"ENGLISH"<<endl;
        else if(data.compare("HALLO")==0)
            cout<<"GERMAN"<<endl;
        else if(data.compare("HOLA")==0)
            cout<<"SPANISH"<<endl;
        else if(data.compare("CIAO")==0)
            cout<<"ITALIAN"<<endl;
        else if(data.compare("BONJOUR")==0)
            cout<<"FRENCH"<<endl;
        else if(data.compare("ZDRAVSTVUJTE")==0)
            cout<<"RUSSIAN"<<endl;
        else
            cout<<"UNKNOWN"<<endl;
        count++;
    }
    return 0;
}
