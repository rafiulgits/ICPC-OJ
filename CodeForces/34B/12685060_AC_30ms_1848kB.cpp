#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len, load;
    while(cin>>len>>load)
    {
        int data[len];
        for(int i=0; i<len; i++)
            cin>>data[i];

        sort(data,data+len);

        int Counter = 0;
        for(int i=0; i<load; i++)
        {
            if(data[i] < 0)
                Counter+=abs(data[i]);
        }
        cout << Counter << endl;

    }
}
