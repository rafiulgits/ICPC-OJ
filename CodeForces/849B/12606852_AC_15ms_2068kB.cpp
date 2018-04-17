/*
CodeForces 849B
*/
#include<bits/stdc++.h>
using namespace std;

vector<double>y;
int totalPairs;

int intercept(double slope);

int main()
{
    while(cin>>totalPairs)
    {
        y.clear();

        for(int x=1; x<=totalPairs; x++)
        {
            double yAxis; cin>>yAxis;
            y.push_back(yAxis);
        }

        double slope1 = (y.at(1)-y.at(0))/1;
        double slope2 = (y.at(2)-y.at(1))/1;
        double slope3 = (y.at(2)-y.at(0))/2;

        if( intercept(slope1) || intercept(slope2) || intercept(slope3) )
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
int intercept(double slope)
{
    set<double>interceptList;
    for(int x=1; x<=totalPairs; x++)
    {
        /* c = y - m.x */
        double c = y.at(x-1)-slope*x;
        interceptList.insert(c);
    }

    /* there is max 2 intercept for two parallel lines*/
    if(interceptList.size() == 2)
        return 1;
    else
        return 0;
}
