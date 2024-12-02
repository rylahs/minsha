#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 3;
	vector<char> yut = { 'D', 'C', 'B', 'A', 'E' };
	while (t--)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		int sum = a + b + c + d;

		cout << yut[sum] << '\n';
	}

	return 0;
}