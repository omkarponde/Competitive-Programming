#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i < n; i++)
    {
        if (s[i-1] > s[i])
        {
            pn();
            return;
        }
    }
    py();
    return;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
