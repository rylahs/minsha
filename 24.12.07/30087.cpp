#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	unordered_map<string, string> ump;

	ump.insert({ "Algorithm" , "204" });
	ump.insert({ "DataAnalysis" , "207" });
	ump.insert({ "ArtificialIntelligence" , "302" });
	ump.insert({ "CyberSecurity" , "B101" });
	ump.insert({ "Network", "303" });
	ump.insert({ "Startup", "501" });
	ump.insert({ "TestStrategy", "105" });

	int n;
	cin >> n;

	while (n--)
	{
		string str;
		cin >> str;

		auto cur = ump.find(str);

		if (cur != ump.end())
			cout << cur->second << '\n';
	}

	return 0;
}