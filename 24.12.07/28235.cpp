#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	unordered_map<string, string> ump;
	ump.insert({ "SONGDO", "HIGHSCHOOL" });
	ump.insert({ "CODE", "MASTER" });
	ump.insert({ "2023", "0611" });
	ump.insert({ "ALGORITHM", "CONTEST" });

	string str;
	cin >> str;

	if (ump.find(str) != ump.end())
		cout << ump.find(str)->second << '\n';

	return 0;
}