#include<bits/stdc++.h>
#include <fstream>
using namespace std;

bool hoa(string s)
{
	bool a = false;
	for(char c : s)
	{
		if(isupper(c)) a = true ;
		
	}
	return a;
}
bool thuong(string s)
{
	bool a = false;
	for(char c : s)
	{
		if(islower(c)) a = true ;
		
	}
	return a;
}
bool so(string s)
{
	bool a = false;
	for(char c : s)
	{
		if(isdigit(c)) a = true ;
		
	}
	return a;
}
bool lienke(string s)
{
	bool a = true;
	for(int i = 0 ; i < s.size() - 1 ; i++ )
	{
		if(s[i]==s[i+1]) a = false;
	}
	return a;
}
bool dacbiet(string s)
{
	bool a = false;
	for(char c : s)
	{
		if( isdigit(c)==0 && isalpha(c)==0 ) a = true ;
	
	}
	return a;
}
main()
{
	ifstream inputFile("password.in");
	ofstream outputFile("res.out");
	
	string s;
	while(getline(inputFile,s))
	{
		if(s.size() >= 8)
		{
			if( hoa(s)==1 && thuong(s)==1 && so(s)==1 && lienke(s)==1 && dacbiet(s)==1) outputFile << "VALID" <<endl;
			else outputFile << "INVALID" << endl;
		} 
		else outputFile << "INVALID" << endl;
	}
	inputFile.close();
	outputFile.close();
	
}
