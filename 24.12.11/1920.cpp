#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	unordered_set<int> ust(n);

	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		ust.insert(k);
	}

	int m;
	cin >> m;
	
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;

		if (ust.find(x) != ust.end())
			cout << 1 << '\n';
		else
			cout << 0 << '\n';
	}



	return 0;
}