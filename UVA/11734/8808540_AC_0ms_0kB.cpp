#include<bits/stdc++.h>
using namespace std;
int main()
{
    int times,i,j;
    cin>>times;
    getchar();
    for(j=1;j<=times;j++)
    {
        int k=0;
        char data1[20],data2[20],flag[20];
        gets(data1);
        gets(data2);
        int len1=strlen(data1);
        int len2=strlen(data2);
        if(strcmp(data1,data2)==0)
            cout<<"Case "<<j<<": Yes"<<endl;
        else
        {
            for(i=0;i<len1;i++)
            {
                if(data1[i]!=' ')
                    flag[k++]=data1[i];
            }
            flag[k++]='\0';
            if(strcmp(data2,flag)==0)
                cout<<"Case "<<j<<": Output Format Error"<<endl;
            else
                cout<<"Case "<<j<<": Wrong Answer"<<endl;
        }
    }
    return 0;
}
