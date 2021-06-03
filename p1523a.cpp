#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        ll m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        while (m--) {
            for (int i = 1; i < n - 1; i++) {
                if (arr[i] == 0) {
                    arr[i - 1] = 1;
                    arr[i + 1] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }

    return 0;
}