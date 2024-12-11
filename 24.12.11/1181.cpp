#include <bits/stdc++.h>
using namespace std;

struct Compare
{
	bool operator() (const string& a, const string& b) const
	{
		if (a.length() == b.length())
			return a < b;
		else
			return a.length() < b.length();
	}
};


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	set<string, Compare> st;
	string str;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		st.insert(str);
	}

	for (auto& e : st)
		cout << e << '\n';


	return 0;
}