// Contest Platform: Codeforces
// Contest Name : Codeforces Round #807 (Div. 2)
// Problem Name : B. Mark the Dust Sweeper
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
    ll n, idx = 0;
    cin >> n;
    vector<ll>v(n);
    for (ll i = 0;i < n;i++) cin >> v[i];
    // logic 
    for (ll i = 0;i < n;i++) {
        if (v[i] != 0) {
            idx = i;
            break;
        }
    }
    ll sum = 0, cnt = 0;
    for (ll i = idx;i < n - 1;i++) {
        sum += v[i];
        if (v[i] == 0)cnt++;
    }
    // output 
    if (n - 1 == cnt)cout << 0 << endl;
    else cout << sum + cnt << endl;
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}

