#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v(10001, 0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		v[k]++;
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == 0)
			continue;

		while (v[i]--)
			cout << i << '\n';
	}
	return 0;
}