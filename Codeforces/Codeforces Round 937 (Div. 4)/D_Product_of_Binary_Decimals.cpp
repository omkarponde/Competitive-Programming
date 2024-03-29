#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;

vector<int> binaryDecimals;

bool isBinaryDecimal(int num) {
	for(int i = 0 ; i < binaryDecimals.size() ; i++ )
	{
		if(num == binaryDecimals[i])return true;
	}

	return false;
}

bool solve(int n) {
	if(isBinaryDecimal(n))return true;

	bool ans = false;

	for(int i = 2 ; i < binaryDecimals.size() ; i++ )
	{
		if(n%binaryDecimals[i] == 0)
		{
			ans = ans | solve(n/binaryDecimals[i]);
		}
	}
	return ans;
}

int main() {
	int a = 1;
	vector<int> last;
	last.push_back(a);
	binaryDecimals.push_back(0);
	binaryDecimals.push_back(1);
	for(int i = 0 ; i < 4 ; i++){
		vector<int>curr;
		for(int i = 0 ; i < last.size() ; i++){
			int val = last[i];
			val *= 10;
			curr.push_back(val);
			val+=1;
			curr.push_back(val);
		}
		last = curr;
		for(int i = 0 ; i < last.size() ; i++ )binaryDecimals.push_back(last[i]);
	}

	binaryDecimals.push_back(100000);

	// for(int i = 0 ; i < binaryDecimals.size() ; i++)cout<<binaryDecimals[i]<<" ";

		int t;
		cin >> t;
		while (t--) {
			int n;
			cin>>n;
			if(solve(n))cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}

		return 0;
}
