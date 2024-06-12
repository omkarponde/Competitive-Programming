#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    long long sum = 0;
    long long maxi = 0;
    long long cnt = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        maxi = max(maxi, arr[i]);
        if(sum - maxi == maxi)cnt++;
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
