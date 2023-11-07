#include<bits/stdc++.h>
using namespace std;

void solve(string s)
{
	int a = -1;
	map<char,int> tmp;
	for(int i = 0 ; i < s.size() ; i++)
	{
		tmp[s[i]]++;
	}
	for(int i = 0 ; i < s.size() ; i++)
	{
		if(tmp[s[i]] == 1) 
        {
            a = i;
            break;
        }
	}
	cout << a << endl;
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
