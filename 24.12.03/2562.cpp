#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> nums;
	int n = 9;
	
	while (n--)
	{
		int input;
		cin >> input;
		nums.push_back(input);
	}

	cout << *max_element(nums.begin(), nums.end()) << '\n';
	cout << max_element(nums.begin(), nums.end()) - nums.begin() + 1 << '\n';


	return 0;
}