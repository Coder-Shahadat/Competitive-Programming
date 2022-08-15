// Contest Name : Educational Codeforces Round 132 (Rated for Div. 2)
// Problem Name : B. Also Try Minecraft
// Author: MD.Shahadat Hossain Bhuian
// Codeforces userName : __Shahadat__
// CodeChef userName : shahadat_43
//---------------------------------------------

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);

void solve() {
    ll n, m, p, q;
    cin >> n >> m;
    vector<ll>v(n + 1), a(n + 1), b(n + 1), temp(n + 1);
    for (ll i = 1;i <= n;i++)cin >> v[i];
    a[1] = b[1] = 0;
    for (ll i = 2;i <= n;i++) {
        ll m = v[i - 1] - v[i];
        m < 0 ? m = 0 : m;
        a[i] = a[i - 1] + m;
    }
    reverse(v.begin() + 1, v.end());
    for (ll i = 2;i <= n;i++) {
        ll m = v[i - 1] - v[i];
        m < 0 ? m = 0 : m;
        b[i] = b[i - 1] + m;
    }
    reverse(b.begin() + 1, b.end());
    while (m--) {
        cin >> p >> q;
        ll damage = 0;
        if (p < q)damage += a[q] - a[p];
        else damage += abs(b[p] - b[q]);
        cout << damage << endl;
    }
}

int main() {
    solve();
    return 0;
}
