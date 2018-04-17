#include<bits/stdc++.h>
using namespace std;
main()
{
    int Case,Count=0; cin>>Case;
    while(Case--)
    {
        int x1,y1,x2,y2,x3,y3;
        double A,B,C;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        A=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        B=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
        C=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
        if(A>B && A>C)
        {
            if((B+C)==A)
                Count++;
        }
        else if(B>A && B>C)
        {
            if((A+C)==B)
                Count++;
        }
        else if(C>A && C>B)
        {
            if((A+B)==C)
                Count++;
        }
    }
    cout<<Count;
}
