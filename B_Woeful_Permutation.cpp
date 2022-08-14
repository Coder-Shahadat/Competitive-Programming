// Contest Name : Codeforces Round #813 (Div. 2)
// Problem Name : B.Woeful Permutation
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
    if (n == 1) { cout << 1 << endl; return; }
    vector<ll>v;
    if (n % 2 == 0) {
        for (ll i = n;i >= 1;i--) {
            if (i % 2 == 0)v.push_back(i - 1);
            else v.push_back(i + 1);
        }
    }
    else {
        for (ll i = n;i >= 1;i--) {
            if (i == 1)v.push_back(1);
            else if (i % 2 == 1)v.push_back(i - 1);
            else v.push_back(i + 1);
        }
    }
    reverse(v.begin(), v.end());
    for (auto k : v)cout << k << " ";
    cout << endl;
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}