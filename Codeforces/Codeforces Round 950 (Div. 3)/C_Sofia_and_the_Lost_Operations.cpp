#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n,0);
    vector<long long> b(n,0);
    unordered_map<int,int>hash;
    for(int i=0; i<n; i++)cin >> a[i];
    for(int i=0; i<n; i++)cin >> b[i];
    int m;
    cin >> m;
    vector<long long>d(m,0);
    for(int i=0; i<m; i++)
    {
        cin >> d[i];
        hash[d[i]]++;
    }

    for(int i = 0 ; i < n ; i++){
        if(a[i] != b[i])
        {
            if(hash[b[i]]==0)
            {
                pn();
                return;
            }
            else{
                hash[b[i]]--;
            }
        }
    }
    if(hash[d[m-1]]!=0)
    {
        for(int i=0; i<n; i++)
        {
            if(b[i] == d[m-1])
            {
                py();
                return;
            }
        }
        pn();
        return;
    }
    py();
    return;
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
