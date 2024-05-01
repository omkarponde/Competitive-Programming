#include <iostream>
#include <vector>

using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    int n;
    cin >> n;
    vector<int> v;

    if(n%10)
    {
        v.push_back(n%10);
        n -= n%10;
    }
    if(n%100){
        v.push_back(n%100);
        n -= n%100;
    }
    if(n%1000){
        v.push_back(n%1000);
        n -= n%1000;
    }
    if(n%10000){
        v.push_back(n%10000);
        n -= n%10000;
    }
    if(n%100000){
        v.push_back(n%100000);
        n -= n%100000;
    }

    cout<<v.size()<<endl;

    for(int i = 0 ; i < v.size() ; i++ )cout<<v[i]<<" ";

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
