#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int r;
		cin >> r;

		string str;
		cin >> str;

		for (auto& e : str)
		{
			for (int i = 0; i < r; i++)
				cout << e;
		}
		cout << '\n';
	}

	return 0;
}