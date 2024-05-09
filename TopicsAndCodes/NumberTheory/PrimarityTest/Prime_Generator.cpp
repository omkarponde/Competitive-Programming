// Problem Link : https://www.spoj.com/problems/PRIME1/
// Implementation of  Primarity test

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n == 1)return false;

    for(int i = 2; i*i <= n ; i++)
    {
        if(n%i == 0)return false;
    }

    return true;
}

void solve()
{
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        if(isPrime(i))cout<<i<<endl;
    }
    cout<<endl;

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
