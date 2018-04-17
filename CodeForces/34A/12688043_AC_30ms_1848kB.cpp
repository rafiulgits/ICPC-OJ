#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    while(cin>>len)
    {
        int data[len+1];
        for(int i=1,temp; i<=len; i++)
            cin>>data[i];

        int x, y, dis = 10000;
        for(int i=1; i<=len-1; i++)
        {
            if(abs(data[i]-data[i+1])<dis)
                x = i, y = i+1, dis = abs(data[i]-data[i+1]);
        }
        if(abs(data[len] - data[1]) < dis)
            x = len, y = 1;

        cout << x << " " << y << endl;
    }
}
