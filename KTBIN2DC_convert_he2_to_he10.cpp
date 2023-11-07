
#include<iostream>
#include<cmath>
using namespace std;
void slove()
{
    string s;
    cin >> s;
    unsigned long long num = 0;
    for(int i = 0 ; i < s.length(); i++)
    {
        if(s[i] == '1') num = (num << 1) | 1; // dich trai >> or voi 1
        else num = num << 1; // dich trai
    }
    cout << num << endl;;
} 
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        slove();
    }
}




