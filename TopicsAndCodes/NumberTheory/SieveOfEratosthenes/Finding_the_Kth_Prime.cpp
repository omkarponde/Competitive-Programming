// Problem Link : https://www.spoj.com/problems/TDKPRIME/
// Implementation of  Sieve of Eratosthenes

#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr)
{
    const int N = 90000000 ; //  N = 9 * 1e7 because if x prime numbers are present in n/ln(n).
    bitset<N> primes; // Use bitset for memory efficiency
    primes.set();     // Set all bits to 1 (assuming all numbers are prime)

    primes[0] = primes[1] = 0;

    int sqrtN = sqrt(N);
    for (int i = 2; i <= sqrtN; ++i)
    {
        if (primes[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                primes[j] = 0;
            }
        }
    }

    int cnt = 0;
    for (int i = 2; i < N; ++i)
    {
        if (primes[i])
        {
            arr.push_back(i);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    vector<int> primes;
    solve(primes);
    while(t--)
    {
        int q;
        cin>>q;
        cout<<primes[q-1]<<endl;
    }
    return 0;
}
