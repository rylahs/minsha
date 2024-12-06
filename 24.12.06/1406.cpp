#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	int n;
	cin >> n;

	list<char> li;
	for (int i = 0; i < str.length(); i++)
		li.push_back(str[i]);

	auto cursor = li.end();

	while (n--)
	{
		char cmd;
		cin >> cmd;

		if (cmd == 'L')
		{
			if (cursor != li.begin())
				cursor--;
			continue;
		}

		else if (cmd == 'D')
		{
			if (cursor != li.end())
				cursor++;
			continue;
		}

		else if (cmd == 'B')
		{
			if (cursor == li.begin())
				continue;
			
			cursor = li.erase(--cursor);
			continue;
		}

		else
		{
			char input;
			cin >> input;

			li.insert(cursor, input);
		}
	}

	for (auto& e : li)
		cout << e;
	cout << '\n';
	return 0;
}