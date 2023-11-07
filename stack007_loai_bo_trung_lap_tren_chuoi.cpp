#include<bits/stdc++.h>
using namespace std;


void solve(string s)

{
	string result = "";
	stack<char> tmp;
	tmp.push(s[0]);
	for(int i = 1 ; i< s.size() ; i++)
	{
		if( !tmp.empty() && s[i] == tmp.top()) tmp.pop();
		else tmp.push(s[i]);
	}
	while(!tmp.empty())
	{
		result += tmp.top();
		tmp.pop();
	}
	reverse(result.begin(),result.end());
	cout << result << endl;
}
main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s ;
		cin >> s ;
		solve(s);
		
	}
}
