#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    string s;
    cin>>s;
    int n = s.length();
    int cnt = 0;
    for(int i = 0 ; i < n ; i++ )if(s[i] == '1')cnt++;

    if(cnt ==0 || cnt == n)
    {
        cout<<"1"<<endl;
        return;
    }
    int cntIslands = 1;
    char curr = s[0];
    for(int i = 1 ; i < n ; i++)
    {
        if(s[i] != s[i-1])cntIslands++;
    }
    for(int i = 1 ; i < n ; i++)
    {
        if(s[i] == '1' && s[i-1] == '0')
        {
            cntIslands--;
            break;
        }
    }
    cout<<cntIslands<<endl;
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
