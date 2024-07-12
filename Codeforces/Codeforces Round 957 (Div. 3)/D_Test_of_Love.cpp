#include <bits/stdc++.h>
using namespace std;

void py() { cout << "YES" << endl; }
void pn() { cout << "NO" << endl; }

bool solution(string& s, int maxJumps, int maxSwim) {
    int index = 0;
    int n = s.length() - 1;
    while(index < n){
        if(s[index] == 'W'){
            if(maxSwim == 0)return false;
            else{
                maxSwim--;
                index++;
            }
        }
        else if(s[index] == 'L'){
            int maxIndex = min(index + maxJumps, n);
            int maxWaterIndex  = -1;
            int maxLogIndex = -1;
            while(index != maxIndex){
                if(s[maxIndex] == 'L'){
                    maxLogIndex = maxIndex;
                    break;
                }
                else if(s[maxIndex] == 'W'){
                    maxWaterIndex = max(maxWaterIndex, maxIndex);
                }
                maxIndex--;
            }
            if(maxLogIndex == -1 && maxWaterIndex == -1)index++;
            else {
                if(maxLogIndex > index){
                    index = maxLogIndex;
                }
                else{
                    index = maxWaterIndex;
                }
            }
        }
        else return false;
    }

    return true;
}

void solve() {
    int n, maxJump, maxSwim;
    cin >> n >> maxJump >> maxSwim;
    string s = "L";
    string t;
    cin >> t;
    s += t;
    s.push_back('L');

    bool result = solution(s,maxJump, maxSwim);

    if(result)py();
    else pn();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
