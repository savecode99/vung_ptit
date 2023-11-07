#include<iostream>
#include<cmath>
using namespace std;
bool check(long long n)
{
   
    while(n)
    {
        int  tmp = n%10;
        if(tmp!=0 && tmp !=1 && tmp != 4 && tmp != 9) return 0;
        n/=10;
    }
    return 1;
}
void slove(int k)
{
    long long lower = pow(10,k-1);
    long long higher = pow(10,k) - 1; 
 // cout << lower << " " << higher << endl; 
    long long a = ceil(sqrt(lower));
    long long b = floor(sqrt(higher));
    for(long long i = a; i <= b ; i++)
    {
        if(check(i*i)) 
        {
            cout << i*i << endl;
            break;
        }
    }
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
     //   cout << check(n) << endl;
        slove(k);
    }
}
