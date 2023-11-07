#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
#define max 10000000
int A[max], B[max];
void slove(int n, int m)
{
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> A[i]; 
	}
	for(int i = 1 ; i <= m ; i++)
	{
		cin >> B[i]; 
	}
	
	for(int i=1 ; i <= m ; i++ )
	{
		int check = 1 ;
		for(int j=1 ; j <= n ; j++)
		{
			if(A[j] == B[i])
			{
				check = 0;
				cout << j << " ";
				break;
			}
		
		}
		if(check) cout << "0" << " ";
	}
}
main()
{
   
	int n,m;
	cin >> n >> m;
	slove(n,m);
    
    
}
