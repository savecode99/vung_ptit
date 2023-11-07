#include<bits/stdc++.h>
using namespace std;

bool valid(string a)
{
	if(a[0]=='0' && a.size() != 1) return 0;
	
	int b = stoi(a);
	if(b >= 0 && b <=255) return 1 ;
	else return 0;
}

void solve( string s)
{
	int count=0;
	for(int i = 1 ; i <= 3 ; i++)
	{
		for(int j = 1 ; j <= 3 ; j++)
		{
			for(int k = 1 ; k <= 3 ; k++)
			{				
					int l = s.size() - i - j - k;
					if(l >0 && l <=3)
					{
						string a = s.substr(0,i);
						string b = s.substr(i,j);
						string c = s.substr(i+j,k);
						string d = s.substr(i+j+k,l);
						if(valid(a) && valid(b) && valid(c) && valid(d)) count++;
					}
			}
		}
	}
	cout << count << endl;
}
main()
{
	int t ;
	cin >> t ;
	while(t--)
	{
		string s ;
		cin >> s;
		solve(s);
	}
}
