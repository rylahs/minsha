#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int year;
	cin >> year;

	bool is_yoon = false;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		is_yoon = true;

	cout << is_yoon << '\n';

	return 0;
}