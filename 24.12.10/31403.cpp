#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string a, b, c;
	cin >> a >> b >> c;

	int ia, ib, ic;
	ia = stoi(a);
	ib = stoi(b);
	ic = stoi(c);

	cout << ia + ib - ic << '\n';
	cout << stoi(a + b) - ic << '\n';
	return 0;
}