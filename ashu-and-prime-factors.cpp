// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/ashu-and-prime-factors-4/

#include <bits/stdc++.h>
using namespace std;
int frequency[1000001];
void preCompute()
{
    int N = 1000000;
    for (int i = 2; i <= N; i++)
        frequency[i] = 1;
    for (int i = 2; i * i <= N; i++)
    {
        if (frequency[i] == 1)
        {
            int ct = 0;
            for (int j = i * i; j <= N; j += i)
            {
                if (frequency[j] == 1)
                {
                    ct++;
                    frequency[j] = 0;
                }
            }
            frequency[i] += ct;
        }
    }
}
void solve()
{
    preCompute();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << frequency[n] << endl;
    }
}
int main()
{
    solve();
    return 0;
}