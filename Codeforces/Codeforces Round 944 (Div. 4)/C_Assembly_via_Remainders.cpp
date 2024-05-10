#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    int n;
    cin >> n;
    vector<int> x(n , 0);
    vector<int> a(n , 0);
    for(int i = 1; i < n; i++)cin >> x[i];

    a[0] = x[1] + 1 ;


    for(int i = 1; i < n - 1 ; i++)
    {
        int factor = (x[i+1] / a[i-1] ) + 1;
        a[i] = factor * a[i-1] + x[i];
    }
    a[n-1] = a[n-2] + x[n-1];
    for(int i = 0 ; i < n ; i++ )cout<< a[i] <<" ";
    // cout<<endl;

    // for(int i = 1 ; i < n ; i++)cout<< a[i]%a[i-1]<<"-";

    cout<<endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
