#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;
    vector<long long> data(n);

    for (int i = 0; i < n; i++) 
        cin >> data[i];
    

    vector<long long> dp(n);
    dp[0] = data[0];
    for (int i = 1; i < n; ++i) 
    {
        dp[i] = dp[i - 1] + data[i];
    }

    sort(dp.rbegin(), dp.rend());
    long long result = 0;
    for (int i = 0; i < k; i++) 
        result += dp[i];
    

    cout << result << '\n';

    return 0;
}