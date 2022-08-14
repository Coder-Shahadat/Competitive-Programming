// Contest Name : Codeforces Round #813 (Div. 2)
// Problem Name : A. Wonderful Permutation
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
    ll n, k, lk;
    cin >> n >> k;
    lk = k;
    vector<ll>v(n);
    for (ll i = 0;i < n;i++)cin >> v[i];
    for (ll i = 0;i < k;i++) {
        if (v[i] <= k)lk--;
    }
    cout << lk << endl;
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)solve();
}