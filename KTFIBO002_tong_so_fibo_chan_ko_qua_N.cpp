#include<iostream>
using namespace std;
void slove(long N)
{
	long a = 1;
	long b = 1;
	long long sum_even=0;
	long long tmp=0;
	while(a<=N)
	{
		tmp = a+b;
		if(a % 2==0) 	sum_even += a;
		a=b;
		b=tmp;
	}
  //  cout << endl;
	cout << sum_even << endl;
}
main()
{
	int t;
	cin >> t ;
	while(t--)
	{
		long n;
		cin >> n;
		slove(n); 
	}
}
