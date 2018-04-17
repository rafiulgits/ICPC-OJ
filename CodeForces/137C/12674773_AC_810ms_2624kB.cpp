#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>Pair;

int main()
{
    int event; cin >> event;

    if(event == 0)
        cout << 0 <<endl;
    else
    {
        Pair history[event];
        for(int i=0,start,stop; i<event; i++)
        {
            cin>>start>>stop;
            history[i] = make_pair(start,stop);
        }
        sort(history, history+event);

        int stop = history[0].second; int Counter = 0;
        for(int i=1,temp; i<event; i++)
        {
            temp = history[i].second;
            if(stop < temp) stop = temp;
            else Counter++;
        }
        cout << Counter << endl;
    }
}
