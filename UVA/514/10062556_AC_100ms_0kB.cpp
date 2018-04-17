#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len; while(cin>>len && len!=0)
    {
        int coachNumber; while(cin>>coachNumber && coachNumber!=0)
        {
            queue<int>Forward;
            stack<int>Backward;
            Forward.push(coachNumber); /// if the coach number is not zero the i take this
            for(int i=1;i<len;i++) /// as the first coach already inputed, now i get others
            {
                cin>>coachNumber;
                Forward.push(coachNumber);
            }
            for(int i=1;i<=len;i++)
            {
                Backward.push(i);
                while(!Backward.empty() && Forward.front()==Backward.top()) /// checking whether the coach sequence valid or not
                {
                    Forward.pop();   /// remove valid sequence of coach
                    Backward.pop();
                }
            }
            if(Backward.size())  /// if there any coach remain thats mean all are not valid
                puts("No");
            else
                puts("Yes");
        }
        cout<<endl;
    }
}
