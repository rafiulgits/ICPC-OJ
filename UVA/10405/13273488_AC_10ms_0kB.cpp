#include<cstdio>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<cstring>

using namespace std;

int stored[1002][1002];

int main()
{
    string p1; string p2;
    while(getline(cin,p1) && getline(cin, p2))
    {
        memset(&stored[0][0], 0, sizeof(stored));

        for(int i=0; i<p1.size(); i++)
        {
            for(int j=0; j<p2.size(); j++)
            {
                if(p1[i] == p2[j])
                    stored[i+1][j+1] = stored[i][j]+1;
                else
                    stored[i+1][j+1] = max(stored[i][j+1],
                                           stored[i+1][j]);
            }
        }
        cout << stored[p1.size()][p2.size()] << endl;
    }
}
