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
            Forward.push(coachNumber);
            for(int i=1;i<len;i++)
            {
                cin>>coachNumber;
                Forward.push(coachNumber);
            }
            for(int i=1;i<=len;i++)
            {
                Backward.push(i);
                while(!Backward.empty() && Forward.front()==Backward.top())
                {
                    Forward.pop();
                    Backward.pop();
                }
            }
            if(Backward.size())
                puts("No");
            else
                puts("Yes");
        }
        cout<<endl;
    }
}
