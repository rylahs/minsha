#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> nums(10, 0);

	while (n != 0)
	{
		nums[n % 10]++;
		n /= 10;
	}

	int mx = -1;

	for (int i = 0; i < nums.size(); i++)
	{
		if (i == 6 || i == 9)
			continue;
		mx = max(mx, nums[i]);
	}

	mx = max((nums[6] + nums[9] + 1) / 2, mx);

	cout << mx << '\n';

	return 0;
}
