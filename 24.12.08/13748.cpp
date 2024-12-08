#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int l = s.length();
    for (int k = 1; k <= l; k++)
    {
        if (l % k == 0)
        {
            bool isPe = true;
            string sub = s.substr(0, k);
            for (int j = k; j < l && isPe; j += k)
            {
                sub = sub[k - 1] + sub.substr(0, k - 1);

                if (sub != s.substr(j, k))
                    isPe = false;
            }

            if (isPe)
            {
                cout << k << '\n';
                break;
            }
        }
    }

    return 0;
}
