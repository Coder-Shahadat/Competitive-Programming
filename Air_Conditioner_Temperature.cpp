// Contest Platform: Codechef
// Contest Name : Starters 52 (Rated for Div 3 & 4)
// Problem Name : Air Conditioner Temperature
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
    ll a, b, c;
    cin >> a >> b >> c;
    if (max(a, c) <= b)cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}