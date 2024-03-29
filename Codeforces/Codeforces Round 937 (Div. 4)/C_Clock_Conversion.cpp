#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;


void solve(){
	string s ;
	cin>>s;
    int hr = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));

    string merit = "AM";
    if (hr >= 12) {
        merit = "PM";
        if (hr > 12)
            hr -= 12;
    }
    if (hr == 0)
        hr = 12;

	string hrString = (hr < 10) ? "0" + to_string(hr) : to_string(hr);
    cout <<hrString << ":" << (m < 10 ? "0" : "") << m << " " << merit << endl;

}



int main() {
		int t;
		cin >> t;

		while (t--) {
			solve();
		}

		return 0;
}
