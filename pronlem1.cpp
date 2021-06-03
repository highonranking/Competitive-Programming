#include <iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
const int maxn = 1010;
int a[maxn];
int main()
{
	int n = 4;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	int sum, ans;
	sum = ans = 0;
	ans = a[3];
	int l = 0;
	n = 2;
	while (n >= 0)
	{
		if (ans > sum)
			sum += a[n--];
		else
		{
			ans += a[n--];
		}
	}
	//printf("%d %d\n",sum,ans);
	if (ans == sum)
		cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}