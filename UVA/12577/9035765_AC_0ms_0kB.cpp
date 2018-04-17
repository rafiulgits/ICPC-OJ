#include<bits/stdc++.h>
using namespace std;
int main()
{
    string data;
    int count=1;
    while(true)
    {
        cin>>data;
        if(data.compare("*")==0)
            return 0;
        cout<< "Case "<<count<<": ";
        if(data.compare("Hajj")==0)
            cout<< "Hajj-e-Akbar"<<endl;
        else
            cout<< "Hajj-e-Asghar"<<endl;
        count++;
    }
    return 0;
}
