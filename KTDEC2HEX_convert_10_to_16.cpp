#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
char A[100];
void slove(long long n)
{
    int i=0;
    if(n==0) \
    {
        cout << n << endl;
        return;
    }
    while(n>0)
    {
        int tmp = n % 16;
        n/=16;
        if(tmp < 10) 
        {
            A[i]= '0' + tmp;
        }
        else 
        {
            A[i] = 'A' + tmp - 10; 
        }
        i++;
    }
    
    for(int j = i-1; j>=0; j--) cout << A[j];
    cout << endl;

}

main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        slove(n);
    }
}
