#include <bits/stdc++.h>
using namespace std;

long long getSides(long long x,long long y,long long z,long long k){
    long long maxi = 0;
     for (long long a = 1; a <= sqrt(k); ++a) {
        if (k % a == 0) {
            for (long long b = a; b <= sqrt(k / a); ++b) {
                if ((k / a) % b == 0) {
                    long long c = k / (a * b);
                    long long a1 = max(a,max(b,c));
                    long long c1 = min(a,min(b,c));
                    long long b1 = a + b + c - a1 - c1;
                    if ((a * b * c == k) && x >= a1 && y >= b1 && z >= c1) {

                        long long cnt = (x - a1 + 1) *( y - b1 +1) *( z - c1 +1);
                        maxi = max(maxi,cnt);
                    }
                }
            }
        }
    }

    return maxi;
}

void solve()
{
    long long x,y,z,k;
    cin>>x>>y>>z>>k;
    long long x1 = max(x,max(y,z));
    long long z1 = min(x,min(y,z));
    long long y1 = x + y + z - x1 - z1;
    long long cnt = getSides(x1,y1,z1,k);
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
