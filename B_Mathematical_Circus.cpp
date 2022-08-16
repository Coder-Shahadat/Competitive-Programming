// Contest Platform: Codeforces
// Contest Name : Codeforces Round #814 (Div. 2)
// Problem Name : B. Mathematical Circus
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
    ll n, k;
    bool flag = true;
    cin >> n >> k;
    vector<pair<ll, ll>>v;
    if (k == 0)cout << "NO" << endl;
    else if (k % 2 == 0) {
        for (ll i = 4;i <= n;i += 4) {
            v.push_back({ i - 1,i });
        }
        for (ll i = 2;i <= n;i += 4) {
            if ((i + k) % 4 != 0) {
                cout << "NO" << endl;
                return;
            }
            v.push_back({ i,i - 1 });
        }
        cout << "YES" << endl;
        for (auto temp : v)cout << temp.first << " " << temp.second << endl;
    }
    else {
        cout << "YES" << endl;
        for (ll i = 1;i <= n;i += 2) {
            cout << i << " " << i + 1 << endl;
        }
    }
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}