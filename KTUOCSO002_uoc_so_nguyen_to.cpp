#include<bits/stdc++.h>
using namespace std;

// sang so nguyen  to
vector<int> vectornguyento(long long n)
{
	vector<int> nguyento(n+1,true);
	nguyento[0] = nguyento[1]=false;
	for(int i=2 ; i<= sqrt(n) ; i++)
	{
		for(int j=i*i ; j<=n ; j+=i )
		{
			nguyento[j]= false;
		}
	}
	return nguyento;
}
main()
{
	int t;
	cin >>t;
	while(t--)
	{
		long long n;
		cin >> n;
		vector<int> snt = vectornguyento(n);
		int count=0;
		for(int i = 1;i <=n ; i++)
		{
			if(snt[i]){
				int num=i;
				if(n%num==0) count++;
			}
		}
		cout << count << endl;
	}
}
