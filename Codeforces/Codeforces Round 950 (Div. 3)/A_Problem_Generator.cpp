#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    int n, m;
    cin >> n>> m;
    string s ;
    cin>>s;
    vector<int>hash(7,0);
    for(int i = 0 ; i < n;i++)
    {
        hash[s[i]-'A']++;
    }
    int cnt = 0;

    for(int i = 0 ; i < 7 ; i++)
    {
        if(hash[i] < m)cnt+= (m-hash[i]);
    }
    cout<<cnt<<endl;
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
