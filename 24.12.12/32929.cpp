#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str = "SUO";

	int n;
	cin >> n;

	cout << str[n % 3] << '\n';

	return 0;
}