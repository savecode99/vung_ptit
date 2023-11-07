#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void solve();

main()
{
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
}
void solve()
{
	int n , S;
	cin >> n >> S;
	int w[n+1] , v[n+1]; // mang weight va vaild
	for(int i = 1 ;i <= n ; i++ ) cin >> w[i];
	for(int i = 1 ;i <= n ; i++ ) cin >> v[i];
	// bang [i[[j] theo thu tu stt va weight cai tui
	int dp[n+1][S+1];
	memset(dp , 0 , sizeof(dp));
	// duyet tung hang
	for(int i = 1 ; i <= n ; i++)
	{
		//duyet tung cot
		for(int j = 1 ; j <= S ; j++)
		{
			// khong lua chon vat thu i vao tui 
			dp[i][j] = dp[i-1][j];
			// co the lua chon vat thu i vao tui
			if(j >= w[i])
			{
				dp[i][j]= max(dp[i][j],dp[i-1][ j - w[i] ] + v[i]);
			}
		}
	}
	
	cout << dp[n][S] << endl;
}
