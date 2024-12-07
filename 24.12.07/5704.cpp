#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str = "";

	while (true)
	{
		getline(cin, str);

		if (str == "*")
			break;
		
		vector<int> alpha(26, 0);
		for (auto& e : str)
		{
			if (e == ' ')
				continue;

			alpha[e - 'a']++;
		}

		bool isPangram = true;

		for (auto& e : alpha)
		{
			if (e == 0)
			{
				isPangram = false;
				break;
			}
		}

		if (isPangram)
			cout << "Y\n";
		else
			cout << "N\n";

	}

	return 0;
}