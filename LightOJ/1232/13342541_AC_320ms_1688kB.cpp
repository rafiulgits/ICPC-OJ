#include<bits/stdc++.h>
using namespace std;
const int mod = 100000007;
int main()
{
    int Case; cin >> Case;
    for(int c=1; c<=Case; c++)
    {
        int len; cin >> len;
        int target; cin >> target;

        int coins[len];
        for(int i=0; i<len; i++)
            cin >> coins[i];

        long long stored[target+2];
        memset(stored,0,sizeof(stored));
        stored[0] = 1;

        for(int k=0; k<len; k++)
        {
            for(int p=1; p<=target; p++)
            {
                if(p < coins[k]) continue;
                stored[p] += stored[p- coins[k]];
                stored[p] %= mod;
            }
        }
        printf("Case %d: %lld\n",c,stored[target]);
    }
}
