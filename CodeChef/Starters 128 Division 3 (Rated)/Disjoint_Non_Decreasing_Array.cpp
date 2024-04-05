#include <bits/stdc++.h>
using namespace std;

void py() { cout << "Yes" << endl; }
void pn() { cout << "No" << endl; }

void solve()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)cin >> arr[i];
    arr.push_back(LLONG_MAX);
    int index = 1;
    long long minR = 0;
    long long maxR = LLONG_MAX;
    // for(int i = 0; i <= n; i++)cout<<arr[i]<<" ";
    // cout<<endl;
    while(index < n)
    {
        if(arr[index] >= arr[index -1])
        {
            index++;
        }
        else if(arr[index] < arr[index -1] && arr[index + 1] >= arr[index] && arr[index + 1] >= arr[index-1])
        {
            long long currMinR = arr[index -1] - arr[index];
            long long currMaxR = arr[index +1] - arr[index];

            if(min(maxR,currMaxR) < max(minR,currMinR))
            {
                // cout<<minR<<" "<<maxR<<endl;
                // cout<<currMinR<<" "<<currMaxR<<endl;
                pn();
                return;
            }
            long long newMin = max(minR,currMinR);
            long long newMax = min(maxR,currMaxR);

            minR = newMin;
            maxR = newMax;
            index += 2;
        }
        else{

            pn();
            return;
        }
    }
    py();
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
