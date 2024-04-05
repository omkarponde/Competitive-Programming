#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    int n,l,r;
    cin >> n >> l >> r ;
    int hap = 0 ;
    int maxHap = 0;
    int minHap = 0;
    while(n--)
    {
        int x;
        cin>>x;
        if( x >= l && x <= r)
        {
            hap++;
        }
        else hap--;
        maxHap = max(maxHap,hap);
        minHap = min(minHap,hap);
    }

    cout<<maxHap<<" "<<minHap<<endl;
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
