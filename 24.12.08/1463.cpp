#include <bits/stdc++.h>
using namespace std;

int dp[1000002];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    dp[1] = 0;

    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + 1;

        if (i % 2 == 0)
            dp[i] = min(dp[i / 2] + 1, dp[i]);

        if (i % 3 == 0)
            dp[i] = min(dp[i / 3] + 1, dp[i]);
    }

    int res = dp[n];

    cout << res << '\n';

    return 0;
}