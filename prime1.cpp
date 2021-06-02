//https://www.spoj.com/problems/PRIME1/

#include <bits/stdc++.h>
using namespace std;
bool sieve[100001];
void computeSieve()
{
    for (int i = 2; i <= 100000; i++)
    {
        sieve[i] = true;
    }
    for (int i = 2; i * i <= 100000; i++)
    {
        if (sieve[i] == true)
        {
            for (int j = i * i; j <= 100000; j += i)
                sieve[j] = false; //marking multiples as false
        }
    }
}

void segmentSieve()
{
    int t;
    cin >> t;
    computeSieve();
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        // Generating all primes till sqrt(n)
        vector<int> primes;
        for (int i = 2; i * i <= n; i++)
            if (sieve[i] == true)
                primes.push_back(i);

        // create dummy variable of range sizeof
        int dummy[n - m + 1];
        for (int i = m; i <= n; i++)
            dummy[i - m] = 1; //idex start from m
        //marking multiple of prime 0

        for (auto pr : primes)
        {
            int firstMultiple = (m / pr) * pr;
            if (firstMultiple < m)
                firstMultiple += pr;

            firstMultiple = max(firstMultiple, pr * pr); // case for non repeating marked
            //cout<< firstMultiple << endl << endl;
            for (int i = firstMultiple; i <= n; i += pr)
            {
                dummy[i - m] = 0;
            }
        }
        for (int i = m; i <= n; i++)
        {
            if (dummy[i - m] == 1)
            {
                if (i != 1)
                {
                    cout << i << endl;
                }
            }
        }
        cout << "\n";
    }
}
int main()
{
    segmentSieve();
    return 0;
}