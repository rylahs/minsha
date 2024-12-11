#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str = "";

	while (true)
	{
		cin >> str;

		if (str == "0")
			break;

		int l = 0;
		int r = str.length() - 1;

		bool isPalindorme = true;

		while (l <= r)
		{
			if (str[l] != str[r])
			{
				isPalindorme = false;
				break;
			}

			l++;
			r--;
		}

		if (!isPalindorme)
			cout << "no\n";
		else
			cout << "yes\n";

	}


	return 0;
}