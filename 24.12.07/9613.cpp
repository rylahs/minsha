#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];

		long long gcd_sum = 0;

		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				gcd_sum += gcd(v[i], v[j]);
			}
		}

		cout << gcd_sum << '\n';
	}

	return 0;
}