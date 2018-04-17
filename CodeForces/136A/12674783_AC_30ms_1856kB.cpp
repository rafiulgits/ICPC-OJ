#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int data[n+1];
        for(int i=1,temp; i<=n; i++)
        {
            cin >> temp;
            data[temp] = i;
        }
        for(int i=1; i<=n; i++)
            cout << data[i] <<" ";
        cout << endl;
    }
}
