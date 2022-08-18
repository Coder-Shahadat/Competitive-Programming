// Contest Platform: Codeforces
// Contest Name : Codeforces Round #815 (Div. 2)
// Problem Name : A. Burenka Plays with Fractions
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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0 && c == 0)cout << 0 << endl;
    else if (a == 0 || c == 0)cout << 1 << endl;
    else {
        ll up = a * d, down = b * c;
        if (up == down)cout << 0 << endl;
        else if (up % down == 0 || down % up == 0)cout << 1 << endl;
        else cout << 2 << endl;
    }
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}