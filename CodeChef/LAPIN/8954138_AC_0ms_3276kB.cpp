#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case;
    cin>>Case;
    while(Case--)
    {
        string data,d1,d2;
        cin>>data;
        int len,mid;
        len=data.size();
        mid=len/2;
        if(len%2==0)
        {
            d1=data.substr(0,mid);
            d2=data.substr(mid,len);
        }
        else
        {
            d1=data.substr(0,mid);
            d2=data.substr(mid+1,len);
        }
        sort(d1.begin(),d1.end());
        sort(d2.begin(),d2.end());
        cout<<((d1.compare(d2)==0)?"YES":"NO");
        cout<<endl;
    }
    return 0;
}
