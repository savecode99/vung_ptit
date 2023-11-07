#include<bits/stdc++.h>
using namespace std;

bool check(long long a)
{
	if(a == 1) return true;
	if (a % 4 != 0) return false;
	check(a/4);

} 

main()
{
	int t;
	cin >> t ;
	while(t--)
	{
		int a;
		cin >> a;
		int b = check(a);
		cout << b << endl;
	}
}
