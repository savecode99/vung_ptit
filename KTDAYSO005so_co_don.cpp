#include<bits/stdc++.h>
using namespace std;


void solve()
{
	int count = 0;
	map<int , int> tmp;
	int n ;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	for(int i = 0 ; i < n ; i++)
	{
		tmp[a[i]]++;
	}
	for(int i = 0 ; i < n ; i++)
	{
		if(tmp[a[i]] == 1) count ++;
	}
	cout << count << endl;
}
main()
{
	int t ;
	cin >> t ;
	while(t--)
	{
		solve();
	}
}
