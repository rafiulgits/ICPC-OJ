#include<bits/stdc++.h>
using namespace std;

string overload(int n);
string checker(string source, string user);

int main()
{
    string data;
    while(cin >> data)
    {
        int len = data.size();
        if(len % 2 != 0 )
        {
            cout << overload(len) <<endl;
        }
        else
        {
            if(len == 2)
            {
                if(data <= "74")
                    cout << checker("47", data)<<endl;
                else
                    cout << overload(len) <<endl;
            }
            else if(len == 4)
            {
                if(data <= "7744")
                    cout << checker("4477", data) <<endl;
                else
                    cout << overload(len) <<endl;
            }
            else if(len == 6)
            {
                if(data <= "777444")
                    cout << checker("444777", data)<<endl;
                else
                    cout << overload(len) <<endl;
            }
            else if(len == 8)
            {
                if(data <= "77774444")
                    cout << checker("44447777", data)<<endl;
                else
                    cout << overload(len)<<endl;
            }
            else if(len == 10)
            {
                if(data <= "7777744444")
                    cout << checker("4444477777", data) <<endl;
                else
                    cout << overload(len) << endl;
            }
        }
    }
}

string checker(string source, string user)
{
    if(user == source || source > user)
        return source;
    do
    {
        if(source >= user)
            return source;
    }
    while(next_permutation(source.begin(), source.end()));
}

string overload(int n)
{
    switch(n)
    {
        case 1: return "47";

        case 2: return "4477";
        case 3: return "4477";

        case 4: return "444777";
        case 5: return "444777";

        case 6: return "44447777";
        case 7: return "44447777";

        case 8: return "4444477777";
        case 9: return "4444477777";

        case 10: return "444444777777";
    }
}
