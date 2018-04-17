#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case;
    cin>>Case;
    while(Case--)
    {
        int len;
        cin>>len;
        int data[len];
        for(int i=1;i<=len;i++)
            cin>>data[i];
        int e_num,flag=1;
        cin>>e_num;
        for(int i=1;i<=len;i++)
        {
            if(data[i]<data[e_num])
                flag++;
        }
        cout<<flag<<endl;
    }
    return 0;
}
