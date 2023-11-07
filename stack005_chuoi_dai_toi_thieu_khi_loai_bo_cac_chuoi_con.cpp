#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
	stack<char> tmp;
	int a = s.size();
	tmp.push(s[0]);
	for(int i = 1 ; i < a ; i++)
	{
		if(  tmp.empty()==0 && tmp.top() == 'A' && s[i] == 'B') tmp.pop();
		else if ( tmp.empty()==0 && tmp.top() == 'C' && s[i] == 'D') tmp.pop();
		else tmp.push(s[i]);
	}
	int b = tmp.size();
	cout << b << endl;
}
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s ;
		cin >> s ;
		solve(s);
		
	}
}
