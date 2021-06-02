// CodeForcers A. Anton and Letters
//  https://codeforces.com/problemset/problem/443/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    set<char> ch;
    getline(cin, s);

    int i = 0;
    while (s[i])
    {
        if (isalpha(s[i]))
            ch.insert(s[i]);
        i++;
    }

    cout << ch.size();

    return 0;
}