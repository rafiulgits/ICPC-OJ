#include<bits/stdc++.h>
using namespace std;

int upper(int start, int stop,int total[], int query);
int main()
{
    int len; int limit;
    cin >> len >> limit;
    int books[len]; int total[len];
    cin >> books[0]; total[0] = books[0];
    for(int i=1; i<len; i++)
    {
        cin >> books[i];
        total[i] = total[i-1]+books[i];
    }

    int best = 0;
    for(int i=0, index; i<len; i++)
    {
        index = upper(i,len-1,total,total[i]-books[i]+limit) - i;
        best = max(best, index);
    }
    cout << best << endl;
}
int upper(int start, int stop,int total[], int query)
{
    while(start <= stop)
    {
        int mid = start + (stop-start)/2;

        if(total[mid] <= query)
            start = mid+1;
        else
            stop = mid-1;
    }
    return start;
}
