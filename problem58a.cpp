#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s1 = "hello";
	string s2;
	cin >> s2;
	int pass = 0;
	int j = 0;
	for (int i = 0; i < s2.length(); i++) {
		if (s2[i] == s1[j])
		{
			j++;
			pass++;

			if (pass == 5)
				break;
		}
	}

	if (pass == 5)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}