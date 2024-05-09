// Problem Link : https://www.spoj.com/problems/TDPRIMES/
// Implementation of  Sieve of Eratosthenes

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    const int N = 100000001; //  N = 1e8 + 1
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
            ++cnt;
            if (cnt % 100 == 1)
                cout << i << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}
