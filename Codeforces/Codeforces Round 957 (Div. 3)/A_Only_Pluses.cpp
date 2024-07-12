#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

long long recursion(long long a, long long b, long long c, int count){
    if(count >= 6)return a*b*c;
    long long ans1 = recursion(a+1 ,b ,c , count+1);
    long long ans2 = recursion(a ,b+1 ,c , count+1);
    long long ans3 = recursion(a ,b ,c+1 , count+1);

    return max(ans1,max(ans2,ans3));
}

void solve()
{
    long long a,b,c;
    cin >> a>>b>>c;

    cout<<recursion(a,b,c,1)<<endl;

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
