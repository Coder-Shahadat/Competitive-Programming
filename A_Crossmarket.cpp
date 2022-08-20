// Contest Platform: Codeforces
// Contest Name : Codeforces Round #816 (Div. 2)
// Problem Name : A. Crossmarket
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
#define asc(v) sort(v.begin(),v.end())
#define dsc(v) sort(v.begin(),v.end()),reverse(v.begin(),v.end())
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);

void solve() {
    ll n, m, Max, Min;
    cin >> n >> m;
    Max = max(n, m), Min = min(n, m);
    if (n == m && n == 1) { dp_x(0); return; }
    dp_x((2 * (Min - 1)) + Max);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}
