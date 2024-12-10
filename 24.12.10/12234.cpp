#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	for (int t = 1; t <= testCase; t++)
	{
		int n, x;
		cin >> n >> x;
		
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		sort(v.begin(), v.end());

		int l = 0;
		int r = n - 1;

		int res = 0;

		while (l <= r)
		{
			if (v[l] + v[r] <= x)
			{
				l++;
			}

			r--;
			res++;
		}

		cout << "Case #" << t << ": " << res << '\n';
	}


	return 0;
}