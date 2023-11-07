#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
	int tong=1;
	for(int i=2 ; i<= sqrt(n) ; i++)
	{
		if(n%i==0) {
			if(n/i==i) tong = tong+i;
			else tong = tong +i +n/i;
		}
	}
	return tong;
}
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << sum(n)<< endl;
	}
}
