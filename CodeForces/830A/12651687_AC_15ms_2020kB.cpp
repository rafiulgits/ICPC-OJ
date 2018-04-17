#include<bits/stdc++.h>
using namespace std;

int main()
{
    int peopleLen, keyLen, office;
    while(cin>> peopleLen >> keyLen >> office)
    {
        int people[peopleLen], key[keyLen];
        for(int i=0; i<peopleLen; i++)
            cin >> people[i];
        for(int i=0; i<keyLen; i++)
            cin >> key[i];

        sort(people, people+peopleLen);
        sort(key, key+keyLen);

        int dis = 0;
        for(int i=0, tempDis = -1; i<=keyLen-peopleLen; i++)
        {
            for(int j=0; j<peopleLen; j++)
            {
                tempDis = max(tempDis, abs(people[j]-key[i+j])+abs(key[i+j]-office));
            }
            if(i==0)
                dis = tempDis;
            else
                dis = min(dis,tempDis);
            tempDis = -1;
        }
        cout << dis << endl;
    }
}
