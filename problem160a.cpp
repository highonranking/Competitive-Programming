#include <bits/stdc++.h>
using namespace std;
int lengthSub(int K, vector<int> v)
{
	priority_queue<int> pq;

	for (int i = 0; i < v.size(); i++) {
		pq.push(v[i]);
	}
	int sum = 0, count = 0;

	while (!pq.empty() && sum <= K) {
		sum += pq.top();
		pq.pop();
		count++;
	}

	return count;
}
int main() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end(), greater<int>());
	int sum = accumulate(v.begin(), v.end(), 0);
	int reqSum = sum / 2;
	cout << lengthSub(reqSum, v);


	return 0;
}