#include<bits/stdc++.h>
using namespace std;
int main()
{
    int times,len,i,j,temp;
    cin>>times;
    while(times--)
    {
        int count=0;
        cin>>len;
        int data[len];
        for(i=0;i<len;i++)
            cin>>data[i];
        for(i=0;i<len-1;i++)
        {
            for(j=0;j<len-i-1;j++)
            {
                if(data[j]>data[j+1])
                {
                    temp=data[j];
                    data[j]=data[j+1];
                    data[j+1]=temp;
                    count++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
    }
    return 0;
}
