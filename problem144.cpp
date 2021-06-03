#include<iostream>
using namespace std;

int main() {
	int n;
	int maxIndex = 0;
	int minIndex = 0;
	int maxValue = 0;
	int minValue = 105;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x <= minValue) {
			minValue = x;
			minIndex = i;
		}
		if (x > maxValue) {
			maxValue = x;
			maxIndex = i;
		}

	}

	if (maxIndex > minIndex)
		cout << (maxIndex - 1) + (n - minIndex) - 1;
	else
		cout << (maxIndex - 1) +  (n - minIndex);
	return 0;
}