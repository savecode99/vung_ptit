#include<bits/stdc++.h>
using namespace std;
void solve(string s)

{
	string tmp;
	tmp.push_back(s[0]);
	for(int i = 1 ; i< s.size() ; i++)
	{
		if(s[i]=='*') tmp.pop_back();
		else tmp.push_back(s[i]);
	}
	cout << tmp << endl;
}
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s ;
		solve(s);
		
	}
}
