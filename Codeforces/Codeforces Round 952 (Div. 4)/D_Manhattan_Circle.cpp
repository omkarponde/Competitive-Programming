#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    int n,m;
    cin >> n>>m;
    vector<string> grid(n);
    for(int i=0;i<n;i++)cin>>grid[i];
    int rowMin = n;
    int rowMax = 0;
    int colMin = m;
    int colMax = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            if(grid[i][j] == '#'){
                rowMin = min(rowMin,i+1);
                rowMax = max(rowMax,i+1);
                colMin = min(colMin,j+1);
                colMax = max(colMax,j+1);
            }
        }
    }

    cout<<rowMin + (( rowMax - rowMin)/2)<<" "<<colMin + ((colMax-colMin )/ 2)<<endl;

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
