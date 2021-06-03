#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll T;
	cin >> T;
	while (T--) {
		ll n;
		cin >> n;
		ll tmp = n;
		ll i = 1;
		while (n > 0) {
			n = n & (n - i);
			i++;
		}
		cout << tmp - i + 1 << endl;
	}


	return 0;
}