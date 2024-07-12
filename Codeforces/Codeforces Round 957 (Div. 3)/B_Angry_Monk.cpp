#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    long long n,k;
    cin >> n>>k;

    long long operations = 0;
    long long maxValue = 0;

    for(long long i = 0; i < k; i++)
    {
        long long x ;
        cin>>x;
        maxValue = max(maxValue,x);

        operations += x + x - 1;
    }

    operations -= (maxValue+maxValue-1);
    cout<<operations<<endl;
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
