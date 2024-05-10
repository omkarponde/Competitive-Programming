#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    string s;
    cin>>s;
    int n = s.length();
    for(int i = 1 ; i < n ; i++)
    {
        if(s[i] != s[i-1])
        {
            py();
            swap(s[i],s[i-1]);
            cout<<s<<endl;
            return;
        }
    }
    pn();
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
