#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	set<string, greater<string>> st;
	while (n--)
	{
		string name, state;
		cin >> name >> state;

		if (state == "enter")
			st.insert(name);
		else if (state == "leave")
		{
			st.erase(name);
		}
	}

	for (auto& e : st)
		cout << e << '\n';

	return 0;
}