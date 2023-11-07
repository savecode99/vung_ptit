#include<bits/stdc++.h>

using namespace std;



vector<int> convert(long long n)
{
	vector<int> s;
	while(n>0)
	{
		int a = n%2;
		s.push_back(a);
		n/=2;
	}
	return s;
}
main()
{
	int t;
	cin >> t;
	while(t--)
	{
	
		long long n;
		cin >> n;
		vector<int> nhiphan = convert(n);
		for(int i= nhiphan.size()-1; i >=0 ; i-- ) cout << nhiphan[i];
		cout << endl;
	}
//	cout << endl;
}
