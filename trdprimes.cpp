// https://www.spoj.com/problems/TDPRIMES/

#include <bits/stdc++.h>
using namespace std;
bool sieve[100000001];

void computeSieve()
{
    for (int i = 2; i <= 100000000; i++)
        sieve[i] = true;
    for (int i = 2; i * i <= 100000000; i++)
    {
        if (sieve[i] == true)
        {
            for (int j = i * i; j <= 100000000; j += i)
                sieve[j] = false;
        }
    }
}

void printPrimes()
{
    computeSieve();
    vector<int> primes;
    for (int i = 2; i <= 100000000; i++)
    {
        if (sieve[i] == true)
            primes.emplace_back(i);
    }
    for (int i = 1; i < primes.size(); i += 100)
        cout << primes[i - 1] << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    printPrimes();
    return 0;
}