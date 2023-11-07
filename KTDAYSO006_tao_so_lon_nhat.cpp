#include<iostream>
#include<algorithm>
using namespace std;

main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string A[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >> A[i];
        }
        sort(A, A+n);
        reverse(A,A+n);
        for(int i = 0 ; i < n ; i++)
        {
             cout << A[i];
        }
        cout << endl;
}
    }
