// https://codeforces.com/contest/1263/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[2] < a[0] + a[1])
            cout << (a[0] + a[1] + a[2]) / 2 << endl;
        else
            cout << a[0] + a[1] << endl;
    }
    return 0;
}