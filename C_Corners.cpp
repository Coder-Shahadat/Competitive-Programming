// Contest Platform: Codeforces
// Contest Name : Codeforces Round #815 (Div. 2)
// Problem Name : C. Corners
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
    ll n, m, count_1 = 0, one;
    cin >> n >> m;
    char mat[n + 5][m + 5];
    for (ll i = 0;i < n;i++) {
        for (ll j = 0;j < m;j++) {
            cin >> mat[i][j];
            if (mat[i][j] == '1')count_1++;
        }
    }
    ll value = -1;
    for (ll i = 0;i < n - 1;i++) {
        for (ll j = 0;j < m - 1;j++) {
            one = 0;
            for (ll p = i;p <= i + 1;p++) {
                for (ll q = j;q <= j + 1;q++) {
                    if (mat[p][q] == '1')one++;
                }
            }
            one = max(0ll, one - 2);
            value = max(value, count_1 - one);
        }
    }
    cout << value << endl;
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}