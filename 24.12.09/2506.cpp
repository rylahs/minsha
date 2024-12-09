#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int sum = 0;

	vector<int> v(n, 0);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	int tmp = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if (v[i] == 1)
			sum += tmp;

		if (v[i] == 1 && v[i + 1] == 1)
			tmp++;
		else
			tmp = 1;

	}
	if (v[n - 1] == 1)
		sum += tmp;
	cout << sum << '\n';

	return 0;
}