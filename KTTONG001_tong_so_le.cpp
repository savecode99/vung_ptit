#include<iostream>
using namespace std;

long long sl(int l , int r)
{
	if(l % 2 == 0 && r % 2 ==0) return (r-l)/2;
	else return (r-l)/2 + 1;
}
long long sum(long long l, long long r)
{
	long long tong;
	if(l % 2 == 1 && r % 2 == 1) tong = ( sl(l,r) * (l+r) ) / 2;
	else if(l % 2 == 1 && r % 2 == 0 ) tong = ( sl(l,r) * (l+r-1) ) /2;
	else if(l % 2 == 0 && r % 2 == 0 ) tong = ( sl(l,r) * (l+r) ) /2;
	else if(l % 2 == 0 && r % 2 == 1 ) tong = ( sl(l,r) * (l+r+1) ) /2;
	return tong;
}
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int l , r;
		cin >> l >> r;
		cout << sum(l,r) << endl;
	}
}
