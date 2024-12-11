#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	c += d;

	int tmp = c / 60;
	c %= 60;

	b += tmp;
	tmp = b / 60;
	b %= 60;

	a += tmp;
	a %= 24;

	cout << a << ' ' << b << ' ' << c << '\n';


	return 0;
}
