#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int prefix[n] = {0};
    for (int i = 0; i < n; i++) {
        if (i == 0)
            prefix[i] = arr[i];
        else
            prefix[i] = prefix[i - 1] + arr[i];

    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        int sum = prefix[r];
        if (l > 0) sum -= prefix[l - 1];

        cout << sum << endl;
    }


    return 0;
}