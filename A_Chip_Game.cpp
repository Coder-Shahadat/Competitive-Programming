// Contest Platform: Codeforces
// Contest Name : Codeforces Round #814 (Div. 2)
// Problem Name : A. Chip Game
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
    ll n, m;
    cin >> n >> m;
    if ((m - 1) % 2) {
        if ((n - 1) % 2)cout << "Tonya" << endl;
        else cout << "Burenka" << endl;
    }
    else {
        if ((n - 1) % 2)cout << "Burenka" << endl;
        else cout << "Tonya" << endl;
    }
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}