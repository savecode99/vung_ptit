#include<iostream>
#include<algorithm>
using namespace std;
int n;
void in(int a[100],int n)
{
	for(int i=0 ; i < n ; i++)
	{
		cout << a[i] <<(i<(n-1) ? " ": "\n");
	}
//	cout << endl;
}

main()
{
	int t;
	cin >> t;
	while(t--)
	{
	//	int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n ; i++) a[i]=i+1;
		do
		{
			in(a,n);
		}
		while(next_permutation(a,a+n));
	}
}
