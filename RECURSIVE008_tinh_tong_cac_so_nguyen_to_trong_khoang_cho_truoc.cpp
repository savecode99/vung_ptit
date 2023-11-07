#include<bits/stdc++.h>
using namespace std;

#define max 100001

int snt[max];
// sang so nguyen to
void setup()
{
	memset(snt , 1 , sizeof(snt));
	snt[0] = snt[1] = 0;
	for(int i = 2 ; i < sqrt(max) ; i++)
	{
		if(snt[i])
		{
			for(int j= i*i ; j<max ; j+=i) snt[j] = 0;
		
		}
	}
	
 } 
 
main()
{
	setup();
 	int t;
 	cin >> t;
 	
 	while(t--)
 	{
 		int sum = 0;
 		int  l , r;
 		cin >> l >> r;
 		for(int i = l ; i <=r ; i++) 
 		{
 			if(snt[i]) sum+=i; 
		 }
		 cout << sum << endl;
	}
}
