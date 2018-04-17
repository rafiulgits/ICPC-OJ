/*
CodeForces 29c
*/

#include<bits/stdc++.h>
using namespace std;

map<int,int>key;
vector<int>data;
vector<int>nodes[100000+10];
bool visit[100000+10];

void traversal(int pos);

int main()
{
    int city; cin>>city;

    int index = 0;

    for(int i=0; i<city; i++)
    {
        int from, to;
        cin>>from>>to;

        if(key.find(from) == key.end())
        {
            key[from] = index;
            data.push_back(from);
            index++;
        }
        if(key.find(to) == key.end())
        {
            key[to] = index;
            data.push_back(to);
            index++;
        }

        nodes[key[from]].push_back(to);
        nodes[key[to]].push_back(from);

    }

    int pos;
    for(int i=0; i<key.size(); i++)
    {
        if(nodes[i].size() == 1)
        {
            pos = i;
            break;
        }
    }

    traversal(pos);
}
void traversal(int pos)
{

    if(! visit[pos])
    {
        visit[pos] = true;
        cout<<data[pos]<<" ";

        for(int i=0; i<nodes[pos].size(); i++)
        {
            traversal(key[ nodes[pos][i] ] );
        }
    }

}
