#include<bits/stdc++.h>
using namespace std;

int main() {
   int n, m;
   cin >> n >> m;
   int a[m];
   for (int i = 0; i < m; i++) {
      cin >> a[i];
   }
   int mini = 10005;
   sort(a, a + m);
   for (int i = n; i <= m; i++) {

      mini = min(mini, abs(a[i - 1]) - abs(a[i - n]));
   }
   cout << mini;
   return 0;
}