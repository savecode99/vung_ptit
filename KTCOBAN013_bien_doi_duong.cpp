#include<iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int am = 0 ;
    int duong = 0 ;
    int check = 1;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i]==0) check = 0;
        else if(a[i] < 0) am++;
        else duong++;
        
    }
    
    if(check)
    {
        if(am <= duong) cout << am << endl;
        else cout << duong << endl;
    }
    else cout << "-1" << endl;
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
