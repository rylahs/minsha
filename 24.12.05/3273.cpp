#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	int x;
	cin >> x;

	int left = 0;
	int right = n - 1;

	int tot = 0;
	while (left < right)
	{
		if (v[left] + v[right] == x)
		{
			tot++;
			left++;
			continue;
		}

		if (v[left] + v[right] < x)
		{
			left++;
			continue;
		}

		if (v[left] + v[right] > x)
		{
			right--;
			continue;
		}
	}
	
	cout << tot << '\n';

	return 0;
}
