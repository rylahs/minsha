#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a, b;
	cin >> a >> b;

	int tmp = b;

	int c = 0, d = 0, e = 0;
	c = tmp % 10;
	tmp /= 10;
	d = tmp % 10;
	tmp /= 10;
	e = tmp % 10;

	cout << a * c << '\n';
	cout << a * d << '\n';
	cout << a * e << '\n';
	cout << a * b << '\n';

	return 0;
}