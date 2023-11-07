#include<iostream>

using namespace std;
int solve(int x , int y , int m)
{
    int hop=m/x;
    int vo = hop;
    while(vo >= y)
    {
        int tmp = vo / y;
        hop +=tmp;
        vo = vo - tmp*y + tmp;
    }
    return hop;
}
main()
{
    int testcase;
    cin >> testcase;
    while(testcase--)
    {
        int x, y , m;
        cin >> x >> y >> m;
        cout << solve(x,y,m) << endl;
    }
}
