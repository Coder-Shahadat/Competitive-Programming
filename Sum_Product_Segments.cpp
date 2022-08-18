// Contest Platform: Codechef
// Contest Name : Starters 50 (Rated for Div 2, 3 & 4)
// Problem Name : Sum Product Segments
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
    ll l1, l2, r1, r2, x, y;
    cin >> x >> y;
    for (ll i = 1; i * i <= y; i++)
    {
        if (y % i != 0)
            continue;
        l1 = x / 2, r1 = (x + 1) / 2;
        l2 = y / i, r2 = i;
        if (l2 < l1 || r2 > r1)
        {
            cout << l1 << " " << r1 << endl;
            cout << r2 << " " << l2 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main()
{
    Faster;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}