#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n),b(n);
    for(int i = 0; i < n; i++)cin >> a[i];
    for(int i = 0; i < n; i++)cin >> b[i];

    int indexa = 0;
    int indexb = 0;
    int cnt = 0 ;

    while(indexa < n && indexb < n){
        if(a[indexa] <= b[indexb])
        {
            indexa++;
        }
        else {
            cnt++;
        }
        indexb++;
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
