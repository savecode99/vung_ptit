#include<bits/stdc++.h>
using namespace std;

long gt(int a)
{
	if(a==1 || a==0) return 1;
	else return a*gt(a-1);
}
main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
        getline(cin , s);
		int a = stoi(s);
		long b = gt(a);
		cout << b << endl;
	}
}
