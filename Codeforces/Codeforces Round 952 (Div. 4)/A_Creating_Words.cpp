#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    string a,b;
    cin >> a >> b;
    swap(a[0],b[0]);
    cout << a <<" "<<b<< endl;

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
