// Author: MD.Shahadat Hossain Bhuian
// Codeforces userName : __Shahadat__
// CodeChef userName : shahadat_43
//---------------------------------------------

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve() {
    ll n, m, ans = INT_MAX;
    cin >> n >> m;
    vector<ll>adj[n],vec(n);
    for (ll i = 0;i < n;i++)cin >> vec[i];
    for (ll i = 1;i <= m;i++) {
        ll u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        ans = min(ans, vec[u] + vec[v]);
    }
    if (m % 2 == 0) {
        cout << 0 << endl;
        return;
    }
    for (ll i = 0;i < n;i++) {
        if (adj[i].size() % 2) {
            ans = min(ans, vec[i]);
        }
    }
    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}
