#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    while(cin>>len)
    {
        int data[len];
        for(int i=0; i<len; i++)
            cin>>data[i];
        sort(data, data+len);
        int checker = 1;
        for(int i=0; i<len; i++)
            if(data[i]-checker == 0)
                checker++;
        cout << checker << endl;
    }
}
