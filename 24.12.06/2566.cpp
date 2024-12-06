#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int arr[10][10] = {};
	int mx = -1;
	int mx_i = -1, mx_j = -1;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cin >> arr[i][j];
			if (mx < arr[i][j])
			{
				mx = arr[i][j];
				mx_i = i;
				mx_j = j;
			}
		}
	}

	cout << mx << '\n' << mx_i << ' ' << mx_j << '\n';

	return 0;
}