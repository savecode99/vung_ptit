#include<iostream>
using namespace std;
const int mod = 1000000007;

unsigned long long check(long long a, long long n)
{
	unsigned long long res = 1;
	while(n>0)
	{
		if(n % 2 == 1)
		{
			res = (res*a) ;
			res = res % mod;
		}
		a *= a;
		a %= mod;
		n /= 2;
		
	}
	return res %  mod;
}



main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long a , n;
		cin >> a >> n;
		cout << check(a,n) << endl;
	}
}
