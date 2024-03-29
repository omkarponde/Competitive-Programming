#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>

using namespace std;

int hasAtMostOneDifferent(string s) {
    int diffCount = 0;
    for (int i = 0; i < s.length() / 2; ++i) {
        if (s[i] != s[s.length() - 1 - i]) {
            diffCount++;
        }
    }
    return diffCount;
}

void solve() {
  int n;
	cin>>n;
  string s;
  cin>>s;

  int prevLength = s.length();

  for (int i = 1; i <= n/2; ++i) {
        if (n % i == 0) {
            int cnt =0;
            int curr = 0;
            int next = i;
            for(int j = 0 ; j < i ; j++)
            {
              curr = j;
              vector<int>hash(26,0);
              while(curr < s.length())
              {
                hash[s[curr] - 'a']++;
                curr += i;
              }
              int maxi =0;
              for(int k= 0 ; k < 26 ; k++)maxi = max(maxi,hash[k]);
              int length = n/i;

              cnt+= length -maxi;
            }
            if(cnt <2)
            {
              prevLength = min(prevLength, i);
              break;
            }
        }
    }
    cout<<prevLength<<endl;
}

int main() {
		int t;
		cin >> t;
		while (t--) {

			solve();
		}

		return 0;
}
