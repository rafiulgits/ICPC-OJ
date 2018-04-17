#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len; int limit;
    cin >> len >> limit;

    int books[len]; int total[len];
    cin >> books[0]; total[0] = books[0];

    for(int i=1; i<len; i++)
    {
        cin >> books[i];
        total[i] = total[i-1] + books[i];
    }

    int best = 0;
    for(int i=0, index; i<len; i++)
    {
        index = upper_bound(total+i, total+len,total[i]-books[i]+limit)
                            - (total+i);

        best = max(best, index);
    }
    cout << best << endl;
}
