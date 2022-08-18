// Contest Platform: Codechef
// Contest Name : Starters 52 (Rated for Div 3 & 4)
// Problem Name : Minimum Sum
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
    ll n, g;
    cin >> n;
    vector<ll>v(n);
    for (ll i = 0;i < n;i++)cin >> v[i];
    g = v[0];
    for (ll i = 1;i < n;i++)g = __gcd(g, v[i]);
    cout << g * n << endl;
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}
