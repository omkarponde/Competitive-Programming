#include <iostream>

using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    int n,m;
    cin >> n >> m;

    for(int i = 0 ; i < n ; i++ )
    {
        string s="";
        if(i%2 ==0) for(int j = 0 ; j < m ; j++)s.push_back('#');
        else if((i + 1)%4 ==0 ){
            s.push_back('#');
            for(int j = 1 ; j < m ; j++)s.push_back('.');
        }
        else if((i + 1)%2 ==0 ){
            for(int j = 1 ; j < m ; j++)s.push_back('.');
            s.push_back('#');
        }
        cout<<s<<endl;
    }
}

int main()
{
    solve();

    return 0;
}
