#include<bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[6][6]; pair<int,int>index;
    for(int row=1; row<=5; row++)
    {
        for(int col=1; col<=5; col++)
        {
            cin>>matrix[row][col];
            if(matrix[row][col]==1)
                index = make_pair(row,col);
        }
    }
    cout << abs(index.first-3)+abs(index.second-3) << endl;
}
