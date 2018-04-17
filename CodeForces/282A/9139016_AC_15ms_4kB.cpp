#include<bits/stdc++.h>
using namespace std;
main()
{
    int Case;
    while(cin>>Case)
    {
        int Count=0;
        string data;
        while(Case--)
        {
            cin>>data;
            if(data.compare("X++")==0 || data.compare("++X")==0)
                Count++;
            else
                Count--;
        }
        cout<<Count<<endl;
    }
}
