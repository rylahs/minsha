#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	int res = a * b * c;
	vector<int> nums(10, 0);
	while (res != 0)
	{
		nums[res % 10]++;
		res /= 10;
	}

	for (auto& e : nums)
		cout << e << '\n';

	return 0;
}
