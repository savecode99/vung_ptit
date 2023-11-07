#include<bits/stdc++.h>

using namespace std;
void solve(string s)
{
	int a = 0 ;
	stack <char> tmp;
	for(int i = 0 ; i < s.size() ; i++)
	{
		if(s[i] == '(') tmp.push(s[i]);
		else
		{
			if(!tmp.empty()) tmp.pop();
			else a+=1;
		}
	}
	int b = a + tmp.size() ;
	cout << b << endl;
	
}
main()
{
	int t ;
	cin >> t ;
	while(t--)
	{
		string s ;
		cin >> s ;
		solve(s);
	}
}
