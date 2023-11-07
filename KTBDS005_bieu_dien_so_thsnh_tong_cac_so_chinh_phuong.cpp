#include<iostream>
#include<vector>
using namespace std;

vector<int> square;
void setup(int n)
{
	for(int i = 1 ; i * i <= n ; i++)
	{
		square.push_back(i*i);
	}
}

int caculate(int a , int n)
{
	if(n==0) return 1;
	if(a < 0 || n < 0 ) return 0;
	
	int inc = caculate( a , n - square[a] );
	int exc = caculate (a-1 , n);
	return inc + exc;
}

main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		setup(n);
		cout << caculate(square.size()-1 , n) << endl;
		square.clear();
	}
}
