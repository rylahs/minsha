#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(202, 0);

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;

		v[input + 100]++;
	}

	int x;
	cin >> x;

	cout << v[x + 100] << '\n';


	return 0;
}
