/*
:::::::::::::::::: number theory :::::::::::::::::::::
to generate 1 series number :
   { number = 1
     number = number * 10 + 1
   }

   to avoid large number for solve this problem mod the number while
   we generate it-> simply - ((number * 10) mod + 1) mod
   this will generate the new number in a low range which is already mod by
   the particular number and never form larger than the particular number
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    while(cin >> num)
    {
        int counter = 1;
        int temp = 1;

        while(temp != 0)
        {
            temp = ((temp*10)%num+1)%num;
            counter++;
        }
        cout << counter << endl;
    }
}
