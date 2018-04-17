#include<bits/stdc++.h>
using namespace std;

const int city = 10e+5+10;
int parent[city];

void initialParent();
void makeJoin(int root1, int root2);
int getParent(int node);

int main()
{
    int node1;
    int counter = 0;
    initialParent();
    while(cin >> node1)
    {
        if(node1==-1)
        {
            cout << counter << endl;
            initialParent();
            counter = 0;
            continue;
        }
        int node2;
        cin >> node2;
        int root1 = getParent(node1);
        int root2 = getParent(node2);
        if(root1 == root2)
            counter++;
        makeJoin(root1,root2);
    }
}
void initialParent()
{
    for(int i=0; i<city; i++)
    {
        parent[i] = i;
    }
}
void makeJoin(int root1, int root2)
{
    parent[root1] = parent[root2];
}
int getParent(int node)
{
    while(parent[node] != node)
    {
        parent[node] = parent[parent[node]];
        node = parent[node];
    }
    return node;
}
