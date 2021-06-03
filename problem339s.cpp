#include <iostream>
#include<algorithm>
using namespace std;
string sorted(string &s) {

	s.erase(remove(s.begin(), s.end(), '+'), s.end());
	sort(s.begin(), s.end());
	return s;
}

int main() {
	string s;
	cin >> s;
	string s1 = sorted(s);
	for (int i = 0; i < s1.length(); i++) {
		cout << s1[i];
		if (i != s1.length() - 1)
			cout << '+';
	}
	return 0;
}