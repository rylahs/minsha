#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(6);

	for (int i = 0; i < 6; i++)
		cin >> v[i];

	int t, p;
	cin >> t >> p;

	int tot_t = 0;

	for (int i = 0; i < v.size(); i++)
	{
		int tmp = 0;
		tmp += v[i] / t;

		if (v[i] % t != 0)
			tmp++;

		tot_t += tmp;
	}

	cout << tot_t << '\n';
	cout << n / p << ' ' << n % p << '\n';
	

	return 0;
}