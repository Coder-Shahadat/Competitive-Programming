// Contest Platform: Codeforces
// Contest Name : CodeTON Round 2 (Div. 1 + Div. 2, Rated, Prizes!)
// Problem Name : B. Luke is a Foodie
// Author: MD.Shahadat Hossain Bhuian
// Codeforces userName : __Shahadat__
// CodeChef userName : shahadat_43
//---------------------------------------------

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpl;
typedef set<ll> sll;
#define dp_x(x) cout<<x<<endl
#define dp_xy(x,y) cout<<x<<" "<<y<<endl
#define endl "\n"
#define pb push_back
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL)

void solve() {
    ll n, x, c(0);
    cin >> n >> x;
    vll v(n);
    for (ll i = 0;i < n;i++)cin >> v[i];
    ll Max = v[0], Min = v[0];
    for (ll i = 0;i < n;i++) {
        Max = max(Max, v[i]);
        Min = min(Min, v[i]);
        if (Max - x > Min + x) {
            c++;
            Min = v[i];
            Max = v[i];
        }
    }
    dp_x(c);
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}