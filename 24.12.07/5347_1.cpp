#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	while (n--)
	{
		long long a, b;
		cin >> a >> b;

		cout << lcm(a, b) << '\n';
	}

	return 0;
}