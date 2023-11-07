#include<bits/stdc++.h>
using namespace std;

double myPow1(double x , int n)
{
	
		if(n==0) 
		{
			return 1;
		}
		else 
		{
			return x * myPow1(x,n-1);
		}
	

}


main()
{
	int t ;
	cin >> t ;
	while(t--)
	{
	
	int x , n;
	cin >> x >> n ;
	double a;
	if(n > 0) a = myPow1(x,n);
	else a = 1.0 / myPow1(x , -n);
	cout << a << endl;
	}
}
