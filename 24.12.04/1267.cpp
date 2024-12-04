#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	int y_tot = 0;

	int m_tot = 0;
	for (auto& e : v)
	{
		y_tot += (e / 30) * 10;
		m_tot += (e / 60) * 15;

		if (e % 29 != 0)
			y_tot += 10;

		if (e % 59 != 0)
			m_tot += 15;
	}

	if (y_tot == m_tot)
		cout << "Y M " << y_tot << '\n';
	else if (y_tot < m_tot)
		cout << "Y " << y_tot << '\n';
	else
		cout << "M " << m_tot << '\n';




	return 0;
}