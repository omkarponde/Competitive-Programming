#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;

string generate(int n,bool isHash)
{
	string s ="";
	for(int i = 0 ; i < n ; i++)
	{
		if(isHash)
		{
			s.push_back('#');
			s.push_back('#');
		}
		else {
			s.push_back('.');
			s.push_back('.');
		}
		isHash = !isHash;
	}

	return s;
}


void solve(){
	int n;
	cin>>n;

	bool isHash = true;

	for(int i = 0 ; i < n ; i++ )
	{
		string s = generate(n,isHash);
		for(int j = 0 ; j < s.length() ; j++ )cout<<s[j];
		cout<<endl;
		for(int j = 0 ; j < s.length() ; j++ )cout<<s[j];
		cout<<endl;
		isHash = !isHash;
	}
}



int main() {
		int t;
		cin >> t;

		while (t--) {
			solve();
		}

		return 0;
}
