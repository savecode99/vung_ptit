#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
    string res="";
    stack<char> tmp;
    tmp.push(s[0]);
    for(int i = 1 ; i < s.size() ; i++)
    {
        if(!tmp.empty())
        {   
             if(tmp.top() == char(s[i] + 32) || tmp.top() == char(s[i] - 32) ) tmp.pop();
             else tmp.push(s[i]);
        }
        else tmp.push(s[i]);
    }
    while(!tmp.empty())
    {
        res += tmp.top();
        tmp.pop();
    }
    reverse(res.begin(),res.end());
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t ;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
         
}