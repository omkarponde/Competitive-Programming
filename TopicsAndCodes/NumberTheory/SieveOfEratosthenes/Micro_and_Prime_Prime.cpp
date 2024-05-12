// Problem Link: https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/micro-and-prime-prime-1/
// Implementation of Primarity Test and Sieve of Eratosthenes

#include <bits/stdc++.h>
using namespace std;

int prime[1000001];
int primePrime[1000001];
int cntPrimePrime[1000001];

void solve(){
	int l,r;
	cin>>l>>r;

	cout<<cntPrimePrime[r] - cntPrimePrime[l-1]<<endl;
}

int main() {
	int t;
	cin>>t;
	prime[0] = prime[1] = primePrime[0] = primePrime[1] = 1;
	int cnt = 0;
	int cntPP = 0;
	for(int i = 2 ; i*i < 1000001 ; i++){
		if(prime[i] == 0){
			cnt++;
			for(int j = i*i ; j < 1000001 ; j = j + i){
				prime[j] = 1;
			}
		}
		if(prime[cnt] == 1){
			primePrime[i] = 1;
		}
		else cntPP++;
		cntPrimePrime[i] = cntPP;
	}
	for(int i = 1001 ; i < 1000001 ; i++)
	{
		if(prime[i] == 0){
			cnt++;
		}

		if(prime[cnt] == 1){
			primePrime[i] = 1;
		}
		else cntPP++;
		cntPrimePrime[i] = cntPP;
	}

	while(t--)solve();

	return 0;
}
