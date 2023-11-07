#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
// giai thua
long long gt(int n)
{
    if(n==1||n==0) return 1;
    return n*gt(n-1);
}
// tong
float sum(double x , int n)
{
    double tong = 0.0;
    for (int i=1;i <=n ; i++) tong += ((pow(x,i)) / (gt(i)));
    return tong;
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        double x;
        cin >> n >> x;
        float a = sum(x,n);
        cout << fixed << setprecision(3) << a << " "<< endl; 
    }
}
