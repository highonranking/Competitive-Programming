#include<bits/stdc++.h>
using namespace std;
#define ll long long

void possiblePer() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[2 * n];
        for (int i = 0; i < 2 * n; i++)
            cin >> a[i];
        for (int i = 0; i < 2 * n; i++) {



            if (i > 0 || i < 2 * n - 1) {
                while ((a[i - 1] + a[i + 1]) / 2 != a[i])
                    next_permutation(a, a + 2 * n);
            }
            if (i == 0) {
                while ((a[i + 1] + a[2 * n - i - 1]) / 2 != a[i])
                    next_permutation(a, a + 2 * n);
            }
            if (i == 2 * n - 1) {
                while ((a[0] + a[i - 1]) / 2 != a[i])
                    next_permutation(a, a + 2 * n);

            }

        }

        for (int i = 0; i < 2 * n; i++) {
            cout << a[i] << " ";
        }





    }


}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    possiblePer();

    return 0;
}