#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Case;
    cin>>Case;
    for(int j=1;j<=Case;j++)
    {
        int t1,t2,f,a;
        int cl[3];
        cin>>t1>>t2>>f>>a;
        for(int i=0;i<3;i++)
            cin>>cl[i];
        sort(cl,cl+3);
        int x=(cl[1]+cl[2])/2;
        int m=t1+t2+f+a+x;
        if(m>=90)
            cout<<"Case "<<j<<": A"<<endl;
        else if(m<90 && m>=80)
            cout<<"Case "<<j<<": B"<<endl;
        else if(m<80 && m>=70)
            cout<<"Case "<<j<<": C"<<endl;
        else if(m<70 && m>=60)
            cout<<"Case "<<j<<": D"<<endl;
        else
            cout<<"Case "<<j<<": F"<<endl;
    }
}
