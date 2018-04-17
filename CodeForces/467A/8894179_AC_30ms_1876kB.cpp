#include<bits/stdc++.h>
using namespace std;
main()
{
    int Case,Count=0;;
    cin>>Case;
    while(Case--)
    {
        int p,q;
        cin>>p>>q;
        if(q-p>=2)
            Count++;
    }
    cout<<Count<<endl;
}
