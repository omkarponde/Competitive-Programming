#include <iostream>
#include <vector>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totalMl = k*l;
    int totalSlice = c*d;
    int totalSalt = p;
    int minMl = n*nl;
    int minSalt = n*np;
    int minSlice = n;

    cout<< min(totalMl/minMl, min(totalSlice/minSlice, totalSalt/minSalt))<<endl;

}

int main()
{
    solve();

    return 0;
}
