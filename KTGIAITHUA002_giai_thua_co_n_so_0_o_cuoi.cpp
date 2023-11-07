#include<iostream>
#include<cmath>
using namespace std;

bool check(long long p , long long n)
{
	long long cnt = 0;
	long long tmp = p;
	long long f = 5;
	while(tmp >= f)
	{
		cnt += tmp/f;
		f=f*5;
	}
	if(cnt >= n) return true;
	else return false;
}

long long find_num(long long n)
{
	if(n==1) return 5;
	long long low = 0;
	long long high = 5*n;
	
	while(low < high )
	{
		long long mid = (low + high ) / 2;
		if(check(mid,n)) high = mid;
		else low = mid+1;
	}
	return high;
}
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
	 	long long a = find_num(n);
		cout <<  a << endl;
	}
}
