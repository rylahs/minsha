#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long s;
    cin >> s;

    int n = 1;

    for (long long i = 0; i <= s; i++)
    {
        if ((i * (i + 1)) / 2 > s)
        {
            n = --i;
            break;
        }
    }
    cout << n << '\n';


    return 0;
}