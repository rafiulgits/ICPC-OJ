#include<bits/stdc++.h>
using namespace std;
int main()
{
    int reqSpeed,downSpeed, len; cin>>reqSpeed>>downSpeed>>len;
    int total=reqSpeed*len;
    float needTime= float(total)-float(downSpeed*len);
    needTime/=float(downSpeed);
    cout<<ceil(needTime)<<endl;
}
