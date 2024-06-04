#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

void solve()
{
    int n, f, k;
    cin >> n>> f >>k;
    vector<int> nums(n,0);
    vector<int>hash1(101,0);
    vector<int> hash2(101,0);
    for(int i = 0 ; i < n ; i++)
    {
        cin>>nums[i];
        hash1[nums[i]]++;
    }
    int fav = nums[f-1];
    sort(nums.begin(),nums.end());
    int cnt = 0;
    for(int i = n-1 ; i >=0; i--)
    {
        hash2[nums[i]]++;
        cnt++;
        if(cnt == k)break;
    }
    if(hash1[fav] == hash2[fav])
    {
        py();
    }
    else if(hash2[fav] == 0)
    {
        pn();
    }
    else{
        cout<<"MAYBE"<<endl;
    }
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
