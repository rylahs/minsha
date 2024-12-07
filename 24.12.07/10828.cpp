#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	stack<int> st;
	while (n--)
	{
		string cmd;
		cin >> cmd;

		if (cmd == "push")
		{
			int x;
			cin >> x;
			st.push(x);
		}
		else if (cmd == "pop")
		{
			if (st.empty())
			{
				cout << -1 << '\n';
				continue;
			}

			cout << st.top() << '\n';
			st.pop();
		}
		else if (cmd == "size")
		{
			cout << st.size() << '\n';
		}
		else if (cmd == "empty")
		{
			if (st.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else
		{
			if (st.empty())
			{
				cout << -1 << '\n';
				continue;
			}
			cout << st.top() << '\n';	
		}
	}

	return 0;
}