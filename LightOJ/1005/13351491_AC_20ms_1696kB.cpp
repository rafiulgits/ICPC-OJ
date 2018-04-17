#include<bits/stdc++.h>
using namespace std;

long long stored[31][31];
long long binomial(int n, int r);

int main()
{

    memset(&stored[0][0], -1, sizeof(stored));
    int Case; cin >> Case;

    for(int c=1; c<=Case; c++)
    {
        int n, k;
        cin >> n >> k;

        printf("Case %d: ",c);

        if(n < k)
        {
            cout << 0 << endl;
            continue;
        }
        if(k == 0)
        {
            cout << 1 << endl;
            continue;
        }

        long long un_used_box = 1;
        for(int i=n-k+1; i<=n; i++)
            un_used_box *= i;
        cout << un_used_box*binomial(n, k);
        cout << endl;
    }
}
long long binomial(int n, int r)
{
    if(n < r) return 0;
    if(r == 1) return n;
    if(r == n || r == 1) return 1;

    if(stored[n][r] != -1) return stored[n][r];

    return stored[n][r] =  (binomial(n-1, r)+
                            binomial(n-1, r-1));
}
