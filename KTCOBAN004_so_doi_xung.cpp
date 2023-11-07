#include<bits/stdc++.h>
using namespace std;
int count(int k)
{
	if( k == 1 || k ==2 ) return 9;
	else return count(k-2)*10;
}
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << count(n) << endl;
	}
}
