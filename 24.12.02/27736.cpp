#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(3, 0);
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;

		if (input == -1)
			v[0]++;
		else if (input == 0)
			v[1]++;
		else
			v[2]++;
	}

	if (v[1] >= (n + 1) / 2)
	{
		cout << "INVALID\n";
		return 0;
	}
	else
	{
		if (v[2] > v[0])
			cout << "APPROVED\n";
		else
			cout << "REJECTED\n";
	}


	return 0;
}