#include<bits/stdc++.h>
using namespace std;

int check(unsigned long long x)
{
	int n=x;
	int A[20],i = 0;
	unsigned long long sum=0;
	while(n > 0)
	{
		A[i]=n % 10;
		i++;
		n = n/10;
	}
	for(int j = 0 ; j<i ; j++)
	{
		int a = A[j];
		sum = sum + pow(a,i);
	}
	if(sum == x) return 1;
	else return 0;
//return sum;
}
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long n;
		cin >> n;
		if(check(n)) cout << "1" << endl;
		else cout << "0" << endl;
//cout << check(n) ;
	}
}
