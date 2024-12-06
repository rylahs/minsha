#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int r, s;
	cin >> r >> s;

	int cake = r * 8 + s * 3;
	int res = cake - 28;

	cout << res << '\n';

	return 0;
}