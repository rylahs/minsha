#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	int d, e;
	int f = 0;
	d = min({ a, b, c });
	e = max({ a, b, c });
	f = a + b + c - d - e;

	cout << d << ' ' << f << ' ' << e << '\n';

	return 0;
}