#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int mx = INT_MIN;
	int mi = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		mx = max(mx, x);
		mi = min(mi, x);
	}

	cout << mi << ' ' << mx << '\n';

	return 0;
}