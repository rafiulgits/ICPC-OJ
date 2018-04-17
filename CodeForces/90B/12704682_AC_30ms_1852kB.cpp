#include<bits/stdc++.h>
using namespace std;

int main()
{
    int totalRow, totalCol;
    cin>>totalRow>>totalCol;
    getchar();
    char matrix[totalRow][totalCol];

    for(int i=0; i<totalRow; i++)
    {
        for(int j=0; j<totalCol; j++)
            cin >> matrix[i][j];
    }

    string data = "";

    for(int row=0; row<totalRow; row++)
    {
        for(int col=0; col<totalCol; col++)
        {
            char now = matrix[row][col];
            bool pick = true;

            for(int cRow = 0; cRow<totalCol; cRow++)
            {
                if(cRow==col) continue;
                if(matrix[row][cRow] == now)
                {
                    pick = false;
                    break;
                }

            }
            if(pick)
            {
                for(int cCol = 0; cCol<totalRow; cCol++)
                {
                    if(cCol == row) continue;
                    if(matrix[cCol][col] == now)
                    {
                        pick = false;
                        break;
                    }
                }
            }
            if(pick)
                data += now;
        }
    }

    cout << data <<endl;
}
