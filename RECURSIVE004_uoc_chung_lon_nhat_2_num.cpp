#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b)
{
	if(a == 0 || b == 0 )
	{
		return a+b;
	}
	else if (a == b)
	{
		return a;
	}
	else if (a > b) return gcd(a-b,b);
	else return gcd(a , b-a);

} 

main()
{
	int t;
	cin >> t ;
	while(t--)
	{
		int a,b;
		cin >> a >> b;
		int x = gcd(a , b);
		cout << x << endl;
	}
}
