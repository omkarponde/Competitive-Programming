#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n,0);
    vector<long long> b(n+1,0);

    for(int i = 0 ; i < n ; i++ )cin>>a[i];
    for(int i = 0 ; i <= n ; i++ )cin>>b[i];

    long long operations = 1;
    long long miniDiff = LLONG_MAX;
    for(int i = 0 ; i < n ; i++)
    {
        if(max(a[i],b[i])>= b[n] && b[n] >= min(a[i],b[i])) miniDiff =0;
        else {
            long long minDist = min( abs(b[n] - a[i]), abs(b[n] - b[i]));
            miniDiff = min(miniDiff,minDist);
        }
        operations += abs(a[i]-b[i]);
    }

    cout<<operations+miniDiff<<endl;
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
