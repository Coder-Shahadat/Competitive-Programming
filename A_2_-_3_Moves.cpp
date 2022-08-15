// Contest Name : Educational Codeforces Round 133 (Rated for Div. 2)
// Problem Name : A. 2-3 Moves
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
    ll n;
    cin >> n;
    if (n == 1) {
        cout << 2 << endl;
    }
    else if (n % 3 == 0) {
        cout << n / 3 << endl;
    }
    else {
        cout << n / 3 + 1 << endl;
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}