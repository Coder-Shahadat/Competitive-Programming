// Contest Name : Codeforces Round #809 (Div. 2)
// Problem Name : B. Making Towers
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
    ll n, temp, count = 1;
    cin >> n;
    vector<ll>v[n + 1];
    for (ll i = 1;i <= n;i++) {
        cin >> temp;
        v[temp].push_back(i);
    }
    for (ll i = 1;i <= n;i++) {
        if (v[i].size() <= 1)cout << v[i].size() << " ";
        else {
            for (ll j = 1;j < v[i].size();j++) {
                ll gap = (v[i][j] - v[i][j - 1]);
                gap -= 1;
                if (gap % 2 == 0)count++;
            }
            cout << count << " ";
        }
        count = 1;
    }
    cout << endl;
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}
