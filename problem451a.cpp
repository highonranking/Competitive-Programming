#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int c = 0;
	while (n != 0 && m != 0) {
		n--;
		m--;
		if (c == 0)
			c = 1;
		else
			c = 0;
	}
	if (c == 0)
		cout << "Malvika" << endl;
	else
		cout << "Akshat" << endl;
	return 0;
}