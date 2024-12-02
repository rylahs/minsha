#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v(21, 0);
	for (int i = 0; i < 21; i++)
		v[i] = i;

	int n = 10;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		reverse(v.begin() + a, v.begin() + b + 1);
	}

	for (int i = 1; i < 21; i++)
		cout << v[i] << ' ';
	cout << '\n';

	return 0;
}