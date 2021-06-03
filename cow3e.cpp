#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n, m, u, q;
	cin >> n >> m >> u >> q;
	int arr[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	//scanline
	int scanline[n][m + 1];
	memset(scanline, 0, sizeof(scanline));
	while (u--) {
		int k, x1, y1, x2, y2;
		cin >> k >> x1 >> y1 >> x2 >> y2;
		for (int i = x1; i <= x2; i++) {
			scanline[i][y1] += k;
			scanline[i][y2 + 1] -= k;
		}
	}

	//postcomputation

	for (int i = 0; i < n; i++) {
		int scan = 0;
		for (int j = 0; j < m; j++) {
			scan += scanline[i][j];
			arr[i][j] += scan;
		}
	}

	// 2d prefx

	int prefix[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			prefix[i][j] = arr[i][j];
			if (i > 0) prefix[i][j] += prefix[i - 1][j];
			if (j > 0) prefix[i][j] += prefix[i][j - 1];
			if (i > 0 && j > 0) prefix[i][j] -= prefix[i - 1][j - 1];
		}
	}

	// sum in given range
	while (q--) {
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int sum = prefix[x2][y2];
		if (x1 > 0) sum -= prefix[x1 - 1][y2];
		if (y1 > 0) sum -= prefix[x2][y1 - 1];
		if (x1 > 0 && y1 > 0) sum += prefix[x1 - 1][y1 - 1];
		cout << sum << endl;
	}



	return 0;
}