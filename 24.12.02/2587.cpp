#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v;
	int n = 5;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());

	int avg = accumulate(v.begin(), v.end(), 0) / 5;
	int mid = v[2];

	cout << avg << '\n' << mid << '\n';
	return 0;
}