#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

float da_thuc(int n, float x)
{
   float tong=0;
    for(int k=1 ; k <=n ; k++)
    {
        tong += ((float)pow(x,k))/(k*(k+1)/2);
    }
    return tong;
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        float x;
        int n;
        cin >> n >> x;
        
        float a = da_thuc(n,x);
        cout << fixed << setprecision(3) << a <<  endl;
    }
}
