#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int A[500000];
void slove()
{
	int i , j;
	A[0] = A[1] = 0;	
	for( i=2 ; i <= 500000 ; i++)
	{
		int n = i;
		for( j=2 ; j <= sqrt(n) ; j++)
		{
			while( n%j == 0 )
			{
				A[i] = j ;
				n /= j ;
			}
			
		}
		if(n != 1) A[i] = n;
	}
//	cout << A[2] << " " << A[3];
}


main()
{
	slove();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		long sum=0;
		for(int i=2 ; i<=n ; i++)
		{
			sum +=A[i];
		
		}
		cout << sum << endl;
	}
}
