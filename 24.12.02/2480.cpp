#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> dice;

	for (int i = 0; i < 3; i++)
	{
		int input;
		cin >> input;
		dice.push_back(input);
	}

	sort(dice.begin(), dice.end());

	int res = 0;

	if (dice[0] == dice[2])
		res = 10000 + dice[0] * 1000;
	else if (dice[0] == dice[1] && dice[1] != dice[2])
		res = 1000 + dice[0] * 100;
	else if (dice[1] == dice[2] && dice[0] != dice[1])
		res = 1000 + dice[1] * 100;
	else
		res = dice[2] * 100;
	cout << res << '\n';

	return 0;
}