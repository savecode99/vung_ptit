#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;


void slove(long long n , long long m)
{
	long long sum = 0;
	for(long long i = 1; i<= sqrt(n); i++)
	{
		if(n%i==0)
		{
			
			if( (m%i != 0 ) ) sum +=i;
			if ((n/i) != i)
            {
                if((m%(n/i)) != 0) sum += n/i;
            }
		}
	}
	cout << sum << endl;
}
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n , m;
		cin >> n >>m;
		slove(n,m);
	}
}
