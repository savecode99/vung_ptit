#include<bits/stdc++.h>
using namespace std;
const int maxn=100001;
int mang[maxn];
void set_up()
{
	memset(mang , 0 , sizeof(mang));
	mang[0] = 0;
	mang[1] = 1;
	for(int i = 2 ; i < maxn ; i++)
	{
		if(mang[i]>0) continue;
		for(int j = i ; j < maxn ; j += i)
		{
			mang[j]= max(i,mang[j]);
		}
	}
}
int check(int n)
{
	set_up();
	for(int i=n ; i>0 ; i--)
	{
		if(mang[i] > sqrt(i)) return i;
	}	
}
////void in(int n)
////{
////	set_up();
////	for (int i=0 ; i<=n ; i++) cout << mang[i] << " ";
////}
main()
{

	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
	//	in(n);
		cout << check(n) << endl;
	}
}
