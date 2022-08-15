// Contest Name : Codeforces Round #808 (Div. 2)
// Problem Name : B. Difference of GCDs
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
    ll n, l, r, found = true;
    vector<ll>store;
    cin >> n >> l >> r;
    for (ll i = 1;i <= n;i++) {
        ll temp = ceil((float)l / i) * i;
        if (temp > r) { found = false;break; }
        store.push_back(temp);
    }
    if (found) {
        cout << "YES" << endl;
        for (auto v : store)cout << v << " ";
        cout << endl;
    }
    else cout << "NO" << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}