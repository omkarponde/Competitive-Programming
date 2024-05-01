#include <bits/stdc++.h>
using namespace std;\

void solve()
{
    long long  n,m;
    cin >> n >> m;
    long long sum = 0 ;

    for(long long b = 1 ; b <= m ; b++)
    {
        long long start = b*b;
        sum += (n + b) / start;
    }

    cout<< sum - 1<< endl;
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
