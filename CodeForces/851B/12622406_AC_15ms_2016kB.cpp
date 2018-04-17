#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ax,ay,bx,by,cx,cy;
    while(cin>>ax>>ay>>bx>>by>>cx>>cy)
    {
        double AB = sqrt(pow((ax-bx), 2) + pow((ay-by),2));
        double BC = sqrt(pow((bx-cx), 2) + pow((by-cy),2));
        double CA = sqrt(pow((cx-ax), 2) + pow((cy-ay),2));

        if(AB == BC && CA < (AB+BC))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}