#include<bits/stdc++.h>
using namespace std;
bool arePair(char start, char stop)
{
    if(start=='(' && stop==')') return true;
    if(start=='[' && stop==']') return true;
    return false;
}
bool isBalance(string data)
{
    stack<char>store;
    for(int i=0;i<data.size();i++)
    {
        char temp=data.at(i);
        if(temp == ' ') continue;
        if(temp=='(' || temp=='[')
            store.push(temp);
        else if(!store.empty() && arePair(store.top(), temp))
            store.pop();
        else
        {
            store.push('N');
            break;
        }
    }
    if(store.empty()) return true;
    return false;
}
int main()
{
    int Case; cin>>Case;
    getchar();
    while(Case--)
    {
        string data; getline(cin , data);
        cout<<(isBalance(data) ? "Yes\n" : "No\n");
    }
}
