#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len; while(cin>>len)
    {
        list<int>num; int data[len];

        ///input area.
        for(int i=0;i<len;i++)
        {
            int temp; cin>>temp;
            num.push_back(temp); data[i]=temp;
        }

        /// process area.
        num.sort();
        num.unique();
        int h[1001]={0};
        for(int i=0;i<len;i++)
            h[data[i]]++;
        int m=0;
        for(int i=0;i<1001;i++)
        {
            if(h[i]>m)
                m=h[i];
        }
        cout<<m<<" "<<num.size()<<endl;
    }
}
