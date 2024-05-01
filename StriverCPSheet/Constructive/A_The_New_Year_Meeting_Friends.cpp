#include <iostream>

using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    int a ,b,c ;
    cin >> a >> b >> c;
    int mini = 100;
    for(int i = min(a,min(b,c)) ; i<= max(a,max(b,c)) ; i++ ) mini = min(mini, abs(a-i) + abs(b-i) + abs(c-i));

    cout<< mini << endl;
}

int main()
{
    solve();

    return 0;
}
