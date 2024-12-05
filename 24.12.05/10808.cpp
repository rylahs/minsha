#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	vector<int> alpha(26, 0);
	for (auto& e : s)
		alpha[e - 'a']++;;
	
	for (auto& e : alpha)
		cout << e << ' ';

	return 0;
}
