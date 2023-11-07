#include<bits/stdc++.h>
using namespace std;
#define max 500
// de quy co nho 
long long f[max];
long long fibo(int n)
{
		if( n == 1) f[n] = 1;
    	else if ( n == 0) f[n] = 0;
		else 
			f[n] = fibo(n-1)+ fibo(n-2);
	
	return f[n];
}

main()
{
	memset(f , 0 , sizeof(f));
	int t;
	cin >> t ;
	while(t--)
	{
		int n;
		cin >> n;
		long long a = fibo(n);
		cout << a << endl;
	}
}
