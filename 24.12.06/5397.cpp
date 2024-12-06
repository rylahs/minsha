#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		string L;
		cin >> L;

		list<char> li;
		li.clear();
		auto cursor = li.begin();
		for (int i = 0; i < L.length(); i++)
		{
			char cmd = L[i];
			if (cmd == '<')
			{
				if (cursor != li.begin())
					cursor--;
			}

			else if (cmd == '>')
			{
				if (cursor != li.end())
					cursor++;
			}

			else if (cmd == '-')
			{
				if (cursor != li.begin())
					cursor = li.erase(--cursor);
			}
			else
			{
				li.insert(cursor, cmd);
			}

		}
		for (auto& e : li)
			cout << e;
		cout << '\n';


	}

	return 0;
}