#include<bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long l,r;
		cin >> l >> r;
      	long long kq = floor(sqrt(r)) - ceil(sqrt(l)) + 1;
		cout <<kq << endl;
     
	}
}
