//https://codeforces.com/problemset/problem/469/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int p1, p2;
    cin >> n;
    cin >> p1;
    set<int> s;
    while (p1--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> p2;
    while (p2--)
    {
        int y;
        cin >> y;
        s.insert(y);
    }

    if (s.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}