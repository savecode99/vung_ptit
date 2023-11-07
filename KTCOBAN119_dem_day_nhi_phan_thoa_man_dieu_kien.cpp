#include<iostream>
using namespace std;

int check(int n , int k)
{
	int count = 0;

	for(int i=0 ; i<=n ; i++)
	{
		int	sl = 0;
		int tmp = i;
		while(tmp > 0)
		{
			if(tmp%2==0) sl++;
			tmp/=2;
		}
	
		if(sl == k) count ++;
	}
	return count;
}
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n , k;
		cin >> n >> k;
		cout << check(n,k) << endl;
//	check(n,k);
	}
}
