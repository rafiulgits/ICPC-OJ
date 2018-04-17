#include<bits/stdc++.h>
using namespace std;

const int mod = 100000007;

int coins[101];
int limit[101];
int stored[101][1002];

int target;
int len;

long long loop(int pos, int cost);

int main()
{
    int Case; cin >> Case;
    for(int c=1; c<=Case; c++)
    {
        cin >> len >> target;
        for(int i=0; i<len; i++)
            cin >> coins[i];
        for(int i=0; i<len; i++)
            cin >> limit[i];

        memset(&stored[0][0], -1, sizeof(stored));

        printf("Case %d: ",c);
        cout << loop(1, 0) << endl;
    }
}
long long loop(int pos, int cost)
{
    if(cost == target) return 1;
    if(pos > len) return 0;

    if(stored[pos][cost] != -1)
        return stored[pos][cost];

    long long temp = 0;
    for(int i=0; i<=limit[pos-1]; i++)
    {
        if(cost + i*coins[pos-1] > target) break;

        temp += loop(pos+1,  cost+i*coins[pos-1]);
        temp %= mod;
    }
    return stored[pos][cost] = temp;
}
