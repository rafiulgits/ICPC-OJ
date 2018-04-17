#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case;
    cin>>Case;
    while(Case--)
    {
        int h,g,r;///h=how many Tim had,g=how many he got and r=require bottle
        cin>>h>>g>>r;
        int total=h+g;
        int Count=0;
        while(total>=r)
        {
            total-=r;
            Count++;
            total+=1;
        }
        cout<<Count<<endl;
    }
}
