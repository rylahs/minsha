#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
	if (a % b == 0) return b;
	return gcd(b % a, a);
}

long long lcm(long long a, long long b)
{
	return (a * b) / gcd(a, b);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	while (n--)
	{
		long long a, b;
		cin >> a >> b;

		cout << lcm(a, b) << '\n';
	}

	return 0;
}