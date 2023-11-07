#include<bits/stdc++.h>
using namespace std;

void revert(string &s,int start , int end)
{
	if(start >= end) return ;
	else 
	{
		swap(s[start], s[end]);
		revert(s,start +1 , end-1);
	}
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
		string ss = s;
		int a = s.size() - 1;
        revert(s,0,a);
		if(s==ss) cout << "1" << endl;
		else cout << "0" << endl;
	}
}
