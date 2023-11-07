#include<iostream>
using namespace std;
unsigned long long count(unsigned long long n)
{
	unsigned long long dem = 0;
	for( unsigned long long i = 5 ; i <= n ; i=i* 5)
	{
		dem += n/i;
	}
	return dem;
}
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long n;
		cin >> n;
		unsigned long long a = count(n);
		cout << a << endl;
	}
}
