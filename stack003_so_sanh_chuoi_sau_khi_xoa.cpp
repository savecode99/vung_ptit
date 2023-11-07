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
bool solve1(string s , string h)
{
	string result1 = "";
	string result2 = "";
	for(char x : s)
	{
		if(x != '#') result1.push_back(x);
		else result1.pop_back();
	}
	for(char x : h)
	{
		if(x != '#') result2.push_back(x);
		else result2.pop_back();
	}
	return result1 == result2 ;
}
main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s,h;
		cin >> s;
		cin >> h;
		int a = solve1(s,h);
		cout << a << endl;
	}
}
