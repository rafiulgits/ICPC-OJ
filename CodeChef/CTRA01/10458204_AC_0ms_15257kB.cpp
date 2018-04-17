#include<bits/stdc++.h>
using namespace std;
int data[10];
int n=8;
bool valid;
void check(int cRow);

int main()
{
    int Case; cin>>Case; while(Case--)
    {
        valid=true;
        for(int i=1;i<=n;i++) cin>>data[i];
        check(1);
        cout<<(valid ? "Yes\n":"No\n");
    }
}
void check(int cRow)
{
    for(int i=cRow+1;i<=n;i++)
    {
        if((abs(cRow-i)==abs(data[i]-data[cRow]) ) || data[i]==data[cRow])
        {
            valid=false;
            break;
        }
        check(cRow+1);
    }
}
