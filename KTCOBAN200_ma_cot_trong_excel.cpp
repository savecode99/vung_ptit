#include<bits/stdc++.h>
using namespace std;

string macot(long long n)
{

	string A;
	while(n)
	{
		int	mark = (n-1) % 26;
		A = char('A'+ mark) + A;
		n=(n-1) / 26;
	}
	return A;
	
}
main()
{
	
    ifstream inputF("input.txt");
	ofstream outputF("output.txt");
	//ifstream inputF("input.txt");
	//ofstream outputF("output.txt");
	long long num;
	while(inputF >> num)
	{
        string tmp = macot(num);
		outputF << tmp << endl;
	}
	inputF.close();
	outputF.close();
}
