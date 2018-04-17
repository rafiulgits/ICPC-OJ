#include<bits/stdc++.h>
using namespace std;
int main()
{
    string data; while(getline(cin,data))
    {
        int Count=0;
        for(int i=0;i<data.size()-1;i++)
            if(isalpha(data.at(i)) && !isalpha(data.at(i+1)))
                Count++;
        cout<<Count<<endl;
    }
}
