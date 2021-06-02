// https://codeforces.com/contest/776/problem/B

#include <bits/stdc++.h>
using namespace std;

int sieve[100001];
void preCompute()
{
    for (int i = 2; i <= 100000; i++)
        sieve[i] = 1;
    for (int i = 2; i * i <= 100000; i++)
    {
        if (sieve[i] == 1)
            for (int j = i * i; j <= 100000; j += i)
                sieve[j] = 0;
    }
}

int main()
{
    preCompute();
    int n;
    cin >> n;
    if (n > 2)
        cout << "2\n";
    else
        cout << "1\n";

    for (int i = 2; i <= n + 1; i++)
    {
        if (sieve[i] == 0)
            cout << "2 ";
        else
            cout << "1 ";
    }

    return 0;
}