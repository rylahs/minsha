#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	set<int> st;
	int n = 10;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;

		st.insert(input % 42);
	}

	cout << st.size() << '\n';


	return 0;
}