#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int res = 0;
	cin >> n;
	vector<int> hi(n);
	vector<int> gi(n);

	for (int i = 0; i < n; i++) {
		cin >> hi[i] >> gi[i];
		for (int j = 0; j < i; j++) {
			if (hi[i] == gi[j])
				res += 1;
			if (gi[i] == hi[j])
				res += 1;
		}
	}
	cout << res << endl;


	return 0;
}