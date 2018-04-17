#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    map<int,int>data;

    for(int i=0,temp; i<n; i++)
    {
        cin >> temp;
        data[temp]++;
    }

    int Pair = 0;

    map<int,int>::iterator i = data.begin();
    for(int temp; i!=data.end(); i++)
    {
        temp = i->second;
        Pair += (temp/2);
    }
    cout << Pair/2 <<endl;
}
