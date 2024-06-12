#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<vector<long long>> &attacks, long long turns, long long health)
{
    int size = attacks.size();
    for (int i = 0; i < size; i++)
    {
        int power = attacks[i][0];
        int cooldown = attacks[i][1];

        health -= (turns / cooldown) * power;
        if (health <= 0)
            return true;
    }
    return false;
}

void solve()
{
    long long h, n;
    cin >> h >> n;
    vector<vector<long long>> attacks(n, vector<long long>(2, 0));
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> attacks[i][0];
        sum += attacks[i][0];
    }
    for (int i = 0; i < n; i++)
        cin >> attacks[i][1];

    long long low = 0;
    long long high = h * 200000;

    long long turns = 1;
    h = h - sum;

    while (low <= high)
    {
        long long mid = low + ((high - low) / 2);

        if (isPossible(attacks, mid, h))
        {
            turns = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << turns + 1 << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
