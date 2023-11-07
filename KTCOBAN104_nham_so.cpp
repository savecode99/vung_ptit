#include<bits/stdc++.h>
using namespace std;
long long convert_to_Min(string s)
{
	for(int i=0 ; i< s.size() ; i++)
	{
		if(s[i]== '5') s[i]='3';
	}
	return stoll(s);
}
long long convert_to_Max(string s)
{
	for(int i=0 ; i< s.size() ; i++)
	{
		if(s[i]== '3') s[i]='5';
	}
	return stoll(s);
}
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string a , b;
		cin >> a >> b;
		cout << convert_to_Min(a) + convert_to_Min(b) << " " << convert_to_Max(a) + convert_to_Max(b)<< endl;
	}
}
