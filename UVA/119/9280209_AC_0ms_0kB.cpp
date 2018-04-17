#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int Count=0;
    while(cin>>num)
    {
        if(Count>0) cout<<endl;
        Count++;
        string name[10];
        map<string ,long>moneydata;
        for(int i=0;i<num;i++)
        {
            cin>>name[i];
            moneydata[name[i]]=0;
        }
        for(int i=0;i<num;i++)
        {
            string fname;
            long money,people,total;
            cin>>fname>>money>>people;
            if(people)
            {
                moneydata[fname]+=money%people;
                moneydata[fname]-=money;
                total=money/people;
                for(int j=0;j<people;j++)
                {
                    string temp;
                    cin>>temp;
                    moneydata[temp]+=total;
                }
            }
        }
        for(int i=0;i<num;i++)
            cout<<name[i]<<" "<<moneydata[name[i]]<<endl;
    }
}

