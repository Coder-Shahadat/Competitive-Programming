// Author: MD.Shahadat Hossain Bhuian
// Codeforces userName : __Shahadat__
// CodeChef userName : shahadat_43
//---------------------------------------------

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    cout << n << endl;
    for (ll i = 1; i <= n; i++)
    {
        v[i - 1] = i;
        cout << i << " ";
    }
    cout << endl;
    for (ll i = 0; i < n - 1; i++)
    {
        swap(v[i], v[n - 1]);
        for (auto k : v)
            cout << k << " ";
        cout << endl;
    }
}

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
