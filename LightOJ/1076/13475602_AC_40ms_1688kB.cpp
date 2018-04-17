#include<bits/stdc++.h>
using namespace std;
typedef long long big;

int len; int limit;

int bs(int low, big high, int arr[]);
bool combination (int now, int arr[]);

int main()
{

    int Case; cin >> Case;
    for(int c=1; c<=Case; c++)
    {
        cin >> len >> limit;
        int ships[len];

        big total = 0;
        int large = 0;
        for(int i=0; i<len; i++)
        {
            cin >> ships[i];
            total += ships[i];
            large = max(large, ships[i]);
        }
        printf("Case %d: ",c);
        cout << bs(large, total, ships) << endl;
    }
}
int bs(int low, big high, int arr[])
{
    int flag = 0;
    while(low <= high)
    {
        int mid = low + (high-low)/2;
        if(combination(mid, arr))
        {
            flag = mid;
            high = mid-1;
        }
        else
            low = mid+1;
    }
    return flag;
}
bool combination (int now, int arr[])
{
    big total = 0; int container = 1;
    for(int i=0; i<len; i++)
    {
        if(arr[i] + total <= now)
            total += arr[i];
        else
        {
            total = arr[i];
            container++;
        }
    }
    return !(container > limit);
}
