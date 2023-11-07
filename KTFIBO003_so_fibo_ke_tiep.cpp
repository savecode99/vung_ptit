#include<iostream>
#include<vector>

using namespace std;
int A[51];

void setup()
{
	A[0]=1,A[1]=1;
	for(int i = 2; i < 51 ;i++)
	{
		A[i]= A[i-1] + A[i-2];
	}
}

bool check(int n)
{
	for(int i = 2; i < 51 ;i++)
	{
		if(n == A[i]) return false;
	}
	return true;
}
void solve(int n)
{
	int a = n+1;
	while(1)
	{
		
		if(check(a))
		{
			cout << a << endl;
			return;
		}
		a++;
	}
}
main()
{
	setup();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		solve(n);
	}
}
