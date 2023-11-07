#include<iostream>
using namespace std;
#define MOD 1000000007

unsigned long long slove(long long a , long long b)
{
    unsigned long long res=1;
    while(b)
    {
        if(b % 2 == 1)
        {
            res *= a;
            res %= MOD;
        }
        a *= a;
        a %= MOD;
        b/=2;
    }
    return res;
}

main()
{
    int test;
    cin >> test ;
    while(test--)
    {
        long long a , n;
        cin >> a >> n;  
        cout << slove(a,n) << endl;

    }
}
