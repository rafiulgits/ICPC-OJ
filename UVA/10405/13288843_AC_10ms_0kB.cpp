#include<bits/stdc++.h>
using namespace std;

const int d = 1002;

int stored[d][d];
bool visit[d][d];
string p1,p2;

int dp(int i,int j)
{
    if(p1[i] == '\0' || p2[j] == '\0') return 0;
    if(visit[i][j]) return stored[i][j];

    visit[i][j] = true;

    if(p1[i]==p2[j])
        return stored[i][j] = dp(i+1,j+1)+1;

    return stored[i][j] = max(dp(i+1,j), dp(i,j+1));
}
int main()
{
    while(getline(cin,p1) && getline(cin,p2))
    {
        memset(&stored[0][0] , 0, sizeof(stored));
        memset(&visit[0][0], false, sizeof(visit));

        cout << dp(0,0) << endl;

    }
    return 0;
}
