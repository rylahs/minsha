#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	int arr[2][7] = {};

	while (n--)
	{
		int s, y;
		cin >> s >> y;
		arr[s][y]++;
	}

	int res = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j < 7; j++)
		{
			res += (arr[i][j] / k);

			if (arr[i][j] % k > 0)
				res++;
		}
	}

	cout << res << '\n';


	return 0;
}