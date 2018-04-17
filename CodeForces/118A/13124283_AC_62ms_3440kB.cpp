#include<bits/stdc++.h>
using namespace std;

int main()
{
    string data; cin >> data;
    for(int i=0; i<data.size(); i++)
    {
        char tem = data.at(i);
        tem = (char) tolower(tem);

        if(tem=='a'||tem=='e'||tem=='i'||tem=='o'||tem=='u'||tem=='y')
            continue;
        cout<<'.'<<tem;
    }
    cout<<endl;
}
