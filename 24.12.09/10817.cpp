#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    vector<int> v(3, 0);
    for (int i = 0; i < 3; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    cout << v[1] << '\n';

    return 0;
}