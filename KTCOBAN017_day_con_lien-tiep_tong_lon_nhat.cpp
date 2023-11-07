#include<iostream>

using namespace std;

void slove()
{
	int n;
	cin >> n;
	long A[n];
	for(int i = 0 ; i <n ; i++) cin >> A[i];
	long sum1 = 0;
	long sum2 = -1000000000;
	for(long i=0 ; i< n ; i++)
	{
		sum1 += A[i];
		sum2 = max(sum2,sum1);
		if(sum1 < 0) sum1 = 0;
	}
	cout << sum2 << endl;
}
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		slove();
	}
}
