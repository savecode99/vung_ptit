#include<iostream>
#include<vector>
using namespace std;

void solve(int n)
{
    vector<long long> res(n+1);
    res[0] = 1;
    res[1] = 1;
    for(int i = 2 ; i <= n ; i++) 
    {
        for(int j=0 ; j < i ; j++)
        {
            res[i] += res[j] * res[i-j-1];
        }
    }
    //return res; // nth catalan
    cout << res[n] << endl;
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
       solve(n);
    }
}
