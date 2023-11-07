#include<bits/stdc++.h>

using namespace std;

long sum(vector<int> a , int size)
{
	if(size <= 0) return 0;
	else return a[size-1] + sum(a,size - 1);
}


// tach tu chuoi nhap vao thanh vector
main()
{
	int t;
	cin >> t;
    cin.ignore();
	while(t--)
	{
	
		string input;
        getline(cin,input);
		stringstream s(input);
		string token;
		vector<int> mang;
		while( getline(s , token , ','))
		{
			mang.push_back(stoi(token));
		}
		int size = mang.size();
		long a = sum(mang , size) ;
        cout << a << endl;
	}
}
