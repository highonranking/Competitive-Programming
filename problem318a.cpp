// https://codeforces.com/problemset/problem/318/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, k;
int main()
{
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}