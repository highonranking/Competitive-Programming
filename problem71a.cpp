#include <bits/stdc++.h>
using namespace std;

string abbr(string &s1) {
    int n = s1.length();
    ostringstream str1;
    str1 << n - 2;
    string numb = str1.str();
    char l = s1[0];
    char r = s1[n - 1];
    string ans = l + numb + r;
    return ans;
}

int main() {
    int n;
    cin >> n;
    while (n >= 0) {
        string s1;
        getline(cin, s1);
        if (s1.length() <= 10)
        {
            cout << s1 << endl;
        }
        else {
            cout << abbr(s1) << endl;
        }
        n--;
    }
    return 0;
}