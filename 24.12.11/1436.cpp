#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int ans = 0;

	int id = 1;

	while (ans < n)
	{
		int tmp = id;
		int cnt = 0;
		while (tmp != 0)
		{
			if (tmp % 1000 == 666)
			{
				cnt++;
				break;
			}
			tmp /= 10;
		}

		if (cnt >= 1)
		{
			ans++;

			if (ans >= n)
			{
				break;
			}
		}
		id++;
	}

	cout << id << '\n';
	return 0;
}