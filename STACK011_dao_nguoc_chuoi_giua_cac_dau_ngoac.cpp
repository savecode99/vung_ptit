#include<bits/stdc++.h>
using namespace std;

void slove(string &s , int leng)
{
	stack<int> index;
	for(int i = 0 ; i<= leng ; i++)
	{
		if(s[i]=='(')
		{
			index.push(i);
		}
		else if(s[i] == ')')
		{
			reverse(s.begin() + index.top() + 1 , s.begin() + i);
			index.pop();	
		}
	}
	
}
string check(string s , int leng)
{
	string res="";
	for(int i = 0 ; i<=leng ;i++)
	{
		if(s[i]!='(' && s[i]!=')' ) res += s[i];
	}
	return res;
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
		int leng = s.size() - 1;
		slove(s,leng);
		string result = check(s,leng);
		cout << result << endl;
	}
}
