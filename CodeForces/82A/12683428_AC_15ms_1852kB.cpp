#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    while(cin>>num)
    {
        string name[] = { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
        if(num <= 5)
        {
            cout <<name[num-1] <<endl;
        }
        else
        {
            for(int i=5; num>5; i+=5)
            {
                num = (num-5)/2;
            }
            cout << name[num] <<endl;
        }
    }
}
