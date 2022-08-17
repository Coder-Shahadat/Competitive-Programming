// Contest Platform: Codechef
// Contest Name : Starters 52 (Rated for Div 3 & 4)
// Problem Name : WA Test Cases
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
    ll n, Min = INT_MAX;
    cin >> n;
    vector<ll>v(n);
    for (ll i = 0;i < n;i++)cin >> v[i];
    string s;
    cin >> s;
    for (ll i = 0;i < s.length();i++) {
        if (s[i] == '0') {
            Min = min(Min, v[i]);
        }
    }
    cout << Min << endl;
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}