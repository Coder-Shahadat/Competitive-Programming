// Contest Platform: Codeforces
// Contest Name : Codeforces Round #801 (Div. 2) and EPIC Institute of Technology Round
// Problem Name : B. Circle Game
// Author: MD.Shahadat Hossain Bhuian
// Codeforces userName : __Shahadat__
// CodeChef userName : shahadat_43
//---------------------------------------------

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<string> vstr;
typedef vector<pll> vpl;
typedef set<ll> sll;
#define loop(i,Start,End,Inc) for(ll i=Start;i<=End;i+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)
#define dp_x(x) cout<<x<<endl
#define dp_xy(x,y) cout<<x<<" "<<y<<endl
#define endl "\n"
#define pb push_back
#define asc(v) sort(v.begin(),v.end())
#define dsc(v) sort(v.begin(),v.end()),reverse(v.begin(),v.end())
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }

void solve() {
    ll n, store = 1;
    cin >> n;
    vll v(n);
    loop(i, 0, n-1, 1)cin >> v[i];
    if (n % 2)dp_x("Mike");
    else {
        ll min_idx = 0;
        loop(i, 1, n - 1, 1) {
            if (v[min_idx] > v[i]) {
                min_idx = i;
            }
        }
        if (min_idx % 2)dp_x("Mike");
        else dp_x("Joe");
    }
}

int main()
{
    Faster;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
