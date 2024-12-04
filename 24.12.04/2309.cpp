#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 9;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int sum = accumulate(v.begin(), v.end(), 0);
	int tmp = 0;
	int ret1 = -1, ret2 = -1;
	
	for (int i = 0; i < n; i++)
	{
		tmp = sum - v[i] - 100;

		if (tmp == v[i])
		{
			if (count(v.begin(), v.end(), tmp) > 1)
			{
				ret1 = v[i];
				ret2 = tmp;
				break;
			}
		}
		else
		{
			auto it = find(v.begin(), v.end(), tmp);
			if (it != v.end())
			{
				ret1 = v[i];
				ret2 = tmp;
				break;
			}
		}
	}
	v.erase(remove(v.begin(), v.end(), ret1), v.end());
	v.erase(remove(v.begin(), v.end(), ret2), v.end());

	sort(v.begin(), v.end());
	for (auto& e : v)
		cout << e << '\n';
	


	return 0;
}