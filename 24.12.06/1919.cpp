#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string a, b;
	cin >> a >> b;

	vector<int> alpha(26, 0);

	for (int i = 0; i < a.length(); i++)
		alpha[a[i] - 'a']++;
	
	for (int i = 0; i < b.length(); i++)
		alpha[b[i] - 'a']--;

	int res = 0;
	for (auto& e : alpha)
	{
		if (e != 0)
			res += abs(e);
	}

	cout << res << '\n';

	return 0;
}