// Contest Name : Codeforces Round #813 (Div. 2)
// Problem Name : c.sort zero
// Author: MD.Shahadat Hossain Bhuian
// Codeforces userName : __Shahadat__
// CodeChef userName : shahadat_43


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);

void solve() {
    ll n;
    cin >> n;
    vector<ll>v(n);
    map<ll, ll>mp;
    set<ll>s;
    for (ll i = 0;i < n;i++)cin >> v[i], mp[v[i]] = i;

    // sorted or not checking
    ll x = -1;
    for (ll i = n - 1;i >= 1;i--) {
        if (v[i] >= v[i - 1])continue;
        else { x = i - 1; break; }      //index stored
    }

    if (x == -1) { cout << 0 << endl;return; }  // if sorted 
    for (ll i = 0;i <= x;i++) {
        x = max(x, mp[v[i]]);
    }

    s.insert(v.begin(), v.begin() + x + 1);
    cout << s.size() << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}

