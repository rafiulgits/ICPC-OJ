#include<bits/stdc++.h>
using namespace std;
int main()
{
    long num,i=0;
    vector<long>data;
    while(cin>>num)
    {
        data.push_back(num);
        sort(data.begin(),data.end());
        if(i%2==0) cout<<data[i/2]<<endl;
        else cout<<(data[i/2]+data[i/2+1])/2<<endl;
        i++;
    }
}