#include<iostream>
using namespace std;
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int l , r , tong;
		cin >> l >> r;
		tong = ((l+r)*(r-l+1))/2;
		cout << tong << endl;
	}
}
