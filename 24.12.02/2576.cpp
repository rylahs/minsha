#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 7;
	vector<int> odd_vector;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;

		if (input % 2 != 0)
			odd_vector.push_back(input);
	}

	if (odd_vector.empty())
	{
		cout << -1 << '\n';
		return 0;
	}
	else
	{
		int oddSum = accumulate(odd_vector.begin(), odd_vector.end(), 0);
		int oddMin = *min_element(odd_vector.begin(), odd_vector.end());
		cout << oddSum << '\n' << oddMin << '\n';
	}

	return 0;
}