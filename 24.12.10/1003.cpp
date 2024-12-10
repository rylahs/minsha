#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	long long fibo[42][2] = {};
	fibo[0][0] = 1; fibo[0][1] = 0;
	fibo[1][0] = 0; fibo[1][1] = 1;
	fibo[2][0] = 1; fibo[2][1] = 1;

	for (int i = 3; i < 41; i++)
	{
		fibo[i][0] = fibo[i - 1][0] + fibo[i - 2][0];
		fibo[i][1] = fibo[i - 1][1] + fibo[i - 2][1];
	}

	while (testCase--)
	{
		int n;
		cin >> n;

		cout << fibo[n][0] << ' ' << fibo[n][1] << '\n';
 	}

	return 0;
}