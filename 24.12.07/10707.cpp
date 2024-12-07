#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int x_price, y_price;
	cin >> x_price >> y_price;

	int y_min, y_add_price;
	cin >> y_min >> y_add_price;

	int my_use;
	cin >> my_use;

	int x_tot = 0, y_tot = 0;
	x_tot = x_price * my_use;

	if (y_min >= my_use)
		y_tot = y_price;
	else
	{
		my_use -= y_min;
		y_tot += y_price;
		y_tot += my_use * y_add_price;
	}

	int res = min(x_tot, y_tot);

	cout << res << '\n';

	return 0;
}