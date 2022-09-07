// Contest Platform: 
// Contest Name : 
// Problem Name : 
// Author: MD.Shahadat Hossain Bhuian
// Codeforces userName : __Shahadat__
// CodeChef userName : shahadat_43
//---------------------------------------------

// Libary 
#include<bits/stdc++.h>
using namespace std;

// Type definition
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<string> vstr;
typedef vector<pll> vpl;
typedef set<ll> sll;

// Loop 
#define loop(i,Start,End,Inc) for(ll i=Start;i<=End;i+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)

// Printing statement
#define dp_x(x) cout<<x<<endl
#define dp_xy(x,y) cout<<x<<" "<<y<<endl
#define nl cout<<"\n"
#define printArray(v) for(auto k:v)cout<<k<<" "

// STL operation 
#define pb push_back
#define in insert
#define all(v) v.begin(),v.end()
#define asc(v) sort(all(v))
#define dsc(v) asc(v),reverse(all(v))
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);

// Precalculation
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

// Solution Start Here
void solve() {
    ll n, q;
    cin >> n >> q;
    vll v(n + 2, 0), cnt(n + 1, 0);
    loop(i, 1, n, 1)cin >> v[i];
    ll ans = 1, taken = 0;
    loopR(i, n, 1, 1) {
        if (i == n) {
            cnt[i] = 1;
            taken++;
            continue;
        }
        if (v[i] == v[i + 1]) {
            cnt[i] = cnt[i + 1] + 1;
        }
        else {
            cnt[i] = cnt[i + 1] + taken + 1;
        }
        taken++;
        ans += cnt[i];
    }

    while (q--)
    {
        ll i, x;
        cin >> i >> x;
        if (v[i] == x) {
            dp_x(ans);
            continue;
        }
        if (i != 1 and v[i] != v[i - 1] and x == v[i - 1]) {
            ll dec = (n - i + 1) * (i - 1);
            ans -= dec;
        }
        if (i != n and v[i] != v[i + 1] and x == v[i + 1]) {
            ll dec = (n - (i + 1) + 1) * ((i + 1) - 1);
            ans -= dec;
        }
        if (i != 1 and v[i] == v[i - 1] and x != v[i - 1]) {
            ll inc = (n - i + 1) * (i - 1);
            ans += inc;
        }
        if (i != n and v[i] == v[i + 1] and x != v[i + 1]) {
            ll inc = (n - (i + 1) + 1) * ((i + 1) - 1);
            ans += inc;
        }
        v[i] = x;
        dp_x(ans);
    }
}

int main() {
    Faster;
    ll t;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}
