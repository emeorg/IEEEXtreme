#include <bits/stdc++.h>
using namespace std;
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll N, Q;
    cin >> N >> Q;
    ll arr[N];

    FOR(i, N)
    cin >> arr[i];

    FOR(i, Q)
    {
        ll query;
        cin >> query;
        // Binary Search
        ll left = 0, right = N - 1;
        ll ansfirst = -1, anslast = -1;

        while (left <= right)
        {
            ll mid = left + (right - left) / 2;
            if (arr[mid] == query)
            {
                ansfirst = mid + 1;
                right = mid - 1;
            }
            else if (arr[mid] < query)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        left = 0;
        right = N - 1;
        while (left <= right)
        {
            ll mid = left + (right - left) / 2;
            if (arr[mid] == query)
            {
                anslast = mid + 1;
                left = mid + 1;
            }
            else if (arr[mid] < query)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        cout << ansfirst << " " << anslast << "\n";
    }
    return 0;
}