#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string n;
	cin >> n;

	reverse(n.begin(), n.end());


	string res = "";

	for (int i = 0; i < n.length(); i++)
	{
		if (i % 3 == 0 && i != 0)
			res += ',';
		res += n[i];
	}

	reverse(res.begin(), res.end());

	cout << res << '\n';

	return 0;
}