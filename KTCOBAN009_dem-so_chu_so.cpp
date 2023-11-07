#include<iostream>

using namespace std;

main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s[0] == '-' ) cout << s.size() - 1 << endl;
        else cout << s.size() << endl;
    }
}
