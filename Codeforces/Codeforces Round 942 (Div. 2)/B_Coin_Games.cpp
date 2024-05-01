#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void flipCoins(string& s, int index){
    int n =s.length();
    if(n == 1)return;
    if(index == 0 )
    {
        if(s[1] == 'U')s[1] = 'D';
        else s[1] = 'U';

        if(s[n-1] == 'U')s[n-1] = 'D';
        else s[n-1] = 'U';
    }
    else if(index ==  n-1 )
    {
        if(s[0] == 'U')s[0] = 'D';
        else s[0] = 'U';

        if(s[n-2] == 'U')s[n-2] = 'D';
        else s[n-2] = 'U';
    }
    else {
        if(s[index-1] == 'U')s[index-1] = 'D';
        else s[index-1] = 'U';

        if(s[index+1] == 'U')s[index+1] = 'D';
        else s[index+1] = 'U';

    }
}

bool check(string & s)
{
    for(int i = 0; i < s.length(); i++) if(s[i] == 'U')return true;

    return false;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin>>s;
    // s.erase(index, 1);
    bool isAlice = true;

    while(n > 0 && check(s)){
        // cout<<s<<" ";
        for(int i = 0 ; i <s.length() ; i++ )
        {
            if(s[i] == 'U')
            {
                flipCoins(s,i);
                s.erase(i, 1);
                break;
            }
        }
        isAlice = !isAlice;
        n--;
    }
    // cout<<endl;
    if(isAlice)pn();
    else py();
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
