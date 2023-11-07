#include<bits/stdc++.h>
using namespace std;

long long tong_uoc(long long n)
{
	long long sum = 1;
	for(int i= 2; i <= sqrt(n) ; i++)
	{
		if(n % i == 0) sum = sum + i + n/i;
	}
	return sum;
}

main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long a , b;
		cin >> a >> b;
		long long c = tong_uoc(a);
		long long d = tong_uoc(b);
		if( a == d && b == c) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
