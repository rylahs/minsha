#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	while (n--)
	{
		string a, b;
		cin >> a >> b;
		vector<int> alpha(26, 0);

		for (int i = 0; i < a.length(); i++)
			alpha[a[i] - 'a']++;
		
		for (int i = 0; i < b.length(); i++)
			alpha[b[i] - 'a']--;

		bool isStrFry = true;
		for (auto& e : alpha)
		{
			if (e != 0)
			{
				isStrFry = false;
				break;
			}
		}

		if (!isStrFry)
			cout << "Impossible\n";
		else
			cout << "Possible\n";

	}

	return 0;
}