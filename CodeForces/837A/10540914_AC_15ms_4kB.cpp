#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len; cin>>len; getchar();
    string data; getline(cin,data);
    int totalUpper=0, maxUpper=0, temp=0;
    bool word=true; data+='0';
    for(int i=0;i<=len;i++)
    {
        if(isalpha(data.at(i)))
        {
            if(isupper(data.at(i)))
                totalUpper++,temp++;
        }
        else
        {
            word=false;
            maxUpper=max(temp,maxUpper);
            temp=0;
        }
    }
    cout<<(word ? totalUpper : maxUpper)<<endl;
}
