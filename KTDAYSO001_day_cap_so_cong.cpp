#include<iostream>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	long long A[n];
	for (int i=0 ; i<n ; i++)
	{
		cin >> A[i];
	}
	long long sub = A[1] - A[0];
	for (int i=1 ; i<n-1 ; i++)
	{
		if(A[i+1] - A[i] != sub) 
			{
			cout << "NO" << endl;
			return;
			}
	}
	cout << "YES" << endl;
}
 main()
{
    int t;
    cin >> t;
    while(t--)
	solve();
    
}
