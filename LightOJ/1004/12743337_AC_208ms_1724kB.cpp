#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Case; cin>>Case;

    for(int c=1; c<=Case; c++)
    {
        int n; cin>>n;

        int matrix[2*n][n];
        int banana[2*n][n];

        memset(&banana[0][0], 0, sizeof(banana));

        /*------ input the matrix -------*/
        for(int row=0; row<2*n-1; row++)
        {
            /*::::::: Diamond Shape input ::::::::::::::
             row = 0 -> col 0 < (1)
             row = 1 -> col 1 < (2)
             row = 2 -> col 2 < (3)
             row = 3 -> col 3 < (4)
             row = 4 -> col 2 < (3)
             row = 5 -> col 1 < (2)
             row = 6 -> col 0 < (1)

             if (row<n) -> MaxCol = row-1: else MaxCol = 2*n-row+1

               *
               **
               ***
               ****
               ***
               **
               *

            */
            int colMax;
            if(row < n)
                colMax = row+1;
            else
                colMax = (2*n)-(row+1);

            for(int col=0; col<colMax; col++)
            {
                cin>>matrix[row][col];
            }

        }

        /*------------------ dynamic programming for store the values--------------------*/

        for(int row=2*n-2; row>=0; row--)
        {
            /* banana counting will start from bottom
               then every node collect the maximum banana from its adjacent
               and added with self :::: by this top node [0][0] will store the
               maximum collecting throughout the traverse of one direction

            */

            int colMax;
            if(row < n-1)
            {
                colMax = row+1;
                for(int col=0; col<colMax; col++)
                {
                    banana[row][col] = max(banana[row+1][col], banana[row+1][col+1]);
                    banana[row][col] += matrix[row][col];
                }
            }
            else
            {
                colMax = (2*n)-(row+1);
                for(int col=0; col<colMax; col++)
                {
                    if(col==0)
                    {
                        banana[row][col] = banana[row+1][col];
                        banana[row][col] += matrix[row][col];
                    }
                    else if(col==colMax-1)
                    {
                        banana[row][col] = banana[row+1][col-1];
                        banana[row][col] += matrix[row][col];
                    }
                    else
                    {
                        banana[row][col] = max(banana[row+1][col], banana[row+1][col-1]);
                        banana[row][col] += matrix[row][col];
                    }
                }
            }
        }

        printf("Case %d: %d\n",c,banana[0][0]);
    }
}
