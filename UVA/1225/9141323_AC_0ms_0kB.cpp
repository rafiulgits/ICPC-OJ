#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case;
    cin>>Case;
    while(Case--)
    {
        int num;
        cin>>num;
        int Count[10]={0};
        for(int i=0;i<=num;i++)
        {
            int temp=i;
            while(temp)
            {
                Count[temp%10]++;
                temp/=10;
            }
        }
        for(int i=0;i<9;i++)
            cout<<Count[i]<<" ";
        cout<<Count[9]<<endl;
    }
}
