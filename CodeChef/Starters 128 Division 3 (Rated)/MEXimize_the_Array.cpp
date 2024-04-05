#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    long long n;
    cin >> n;
    priority_queue<long long , vector<long long>,greater<long long>> minHeap;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin>>x;
        minHeap.push(x);
    }

    long long steps = 0;

    for(int i = 0 ; i < n ; i++)
    {
        long long x = minHeap.top();
        minHeap.pop();
        steps += abs(x-i);
    }

    cout<<steps<<endl;
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
