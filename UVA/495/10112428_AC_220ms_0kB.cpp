#include<bits/stdc++.h>
using namespace std;
vector<string>fib;
string addOf(string num1, string num2)
{
    int len1=num1.size(); int len2=num2.size();

       ///resize two string
       if(len1>len2) ///means num2 is smaller than num1
       {
           for(int i=0;i<len1-len2;i++)
                num2='0'+num2;
       }
       else if(len2>len1) ///means num1 is smaller than num2
       {
           for(int i=0;i<len2-len1;i++)
                num1='0'+num1;
       }

       ///define a new string ans and carry
       string ans; int carry=0;

       ///adding two number

       for(int i=num1.size()-1;i>=0;i--)
       {
           int n1=num1.at(i)-'0';
           int n2=num2.at(i)-'0';
           int sum=n1+n2+carry;
           if(sum>9)
           {
               carry=1;
               sum-=10;
               ans=(char)(sum+'0')+ans;
           }
           else
           {
               ans=(char)(sum+'0')+ans;
               carry=0;
           }
       }
       if(carry==1)
            ans='1'+ans;
      return ans;
}
void fibGenerator()
{
    int n=5005;
    string f1="0"; fib.push_back(f1);
    string f2="1"; fib.push_back(f2);
    string sum=addOf(f1,f2); fib.push_back(sum);
    for(int i=1;i<n;i++)
    {
        if(i==n-2)
            break;
        f1=f2;
        f2=sum;
        sum=addOf(f1,f2);
        fib.push_back(sum);
    }
}
int main()
{
    fibGenerator();
    int num; while(cin>>num)
        cout<<"The Fibonacci number for "<<num<<" is "<<fib[num]<<endl;
    return 0;
}


