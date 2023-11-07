#include<bits/stdc++.h>
using namespace std;

void solve(string s)
{
	int count_open = 0;
	int count_close = 0;
	int start = 0;
	string result = "";
	for(int i= 0 ; i < s.size() ; i++)
	{
		if(s[i] == '(') count_open++;
		else if (s[i] == ')') count_close++;
		if(count_close == count_open) 
		{
			result += s.substr(start + 1 , i - 1 - start);
			start = i+1;
		}
	}
	cout << result << endl;
}
main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		solve(s);
	}
}
