#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << "*";
		
		for (int j = 0; j < 2 * (n - i - 1); j++)
			cout << ' ';

		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << '\n';
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			cout << "*";
		
		for (int j = 0; j < 2 * (i + 1); j++)
			cout << ' ';

		for (int j = 0; j < n - i - 1; j++)
			cout << "*";

		cout << '\n';
	}


	return 0;
}