#include<bits/stdc++.h>
using namespace std;
int main()
{
    int stops,in,out,total=0,i,max=0;
    cin>>stops;
    for(i=0;i<stops;i++)
    {
        cin>>out>>in;
        total+=in;
        total-=out;
        if(total>max)
            max=total;
    }
    cout<<max;
    return 0;

}
