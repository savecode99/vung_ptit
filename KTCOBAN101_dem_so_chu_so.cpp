#include<bits/stdc++.h>
using namespace std;


main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int A[10] = {0};
		int a , b;
		cin >> a  >> b;
		if (a ==0 || b ==0) A[0]++;
		if(a < b)
		{		
			for(int i = a ; i <= b ; i++)
			{
				int num = i;
				while(num>0)
				{
					int tm = num % 10;
					A[tm]++ ;
					num = num / 10;
				}
			}
		}else
		{
			
			for(int i = b ; i <= a ; i++)
			{
				
				int num = i;
				while(num>0)
				{
					int tm = num % 10;
					A[tm]++ ;
					num = num / 10;
				}
			}			
		}
		for(int j=0 ; j <= 9 ; j++)
		{
			cout << A[j] <<" ";
		}
		cout << endl;
	}
}
