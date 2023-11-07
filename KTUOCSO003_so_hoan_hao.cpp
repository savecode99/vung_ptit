#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		long long sum = 0;
		for(long long i = 1 ; i * i <= n ; i++)
		{
			if(n%i==0)
			{
				if(n/i==i)sum+=i;
				else sum = sum + i + n/i;
			}
		}
		if(sum-n == n ) cout << "1" << endl;
		else cout << "0" << endl;
	}
 	return 0;
}
