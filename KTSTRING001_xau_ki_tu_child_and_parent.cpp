#include<iostream>
#include<fstream>
using namespace std;

//#define s1 "child"
//#define s2 "parent"
string s1= "child";
string s2="parent";

void slove()
{
	string s;
	getline(cin,s);
	int vt1 , vt2;
	vt1 = s.find(s1);
	vt2 = s.find(s2);
	string s3="";
	string s4="";
	// tach chuoi child
	for(int i = vt1 + 9 ; i <= vt2 - 4 ; i++) s3.push_back(s[i]);
	// tach chuoi parent
	for(int i = vt2 + 10; i <= s.length() - 2 ; i++) s4.push_back(s[i]);
	
	//cout << s3 << endl << s4 << endl;
	int check = s4.find(s3);
	cout << check << endl;		
}
main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		slove();
	}
}
