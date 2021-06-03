#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;
        ll arr[n];
        ll prefix[n] = {0};
        for (ll i = 1; i <= n; i++) {
            cin >> arr[i];
            if (arr[i] ==  -1)
                arr[i] = prefix[i - 1] / (i - 1);
            prefix[i] = prefix[i - 1] + arr[i];

            cout << arr[i] << " ";
        }
        cout << endl;

    }

    return 0;
}