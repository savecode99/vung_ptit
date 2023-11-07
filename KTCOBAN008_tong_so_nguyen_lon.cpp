#include<bits/stdc++.h>
using namespace std;


void solve(string a , string b)
{

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	string res="";
	
	for(int i = b.size() ; i < a.size() ; i++) b+='0';
	
	int nho = 0 , plus = 0;
	
	for(int i = 0 ;  i < a.size() ; i++)
	{
		int tmp = a[i]-'0' + b[i]-'0'  + nho ;
		plus = (tmp)%10;
		nho = (tmp)/10;
		
		res+='0' + plus;
	}
	if(nho != 0 ) res+=('0' + nho);
	reverse(res.begin(), res.end());
	cout << res << endl;
	
}
main()
{
	int t ;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string a , b ;
		cin >> a >> b;
		if(a.size() >= b.size()) solve(a,b);
		else solve(b,a);
	}
}
