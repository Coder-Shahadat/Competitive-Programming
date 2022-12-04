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
#define rep(i, n) for (ll i = 0; i < n;i++)
#define rev(i, n) for (ll i = n - 1; i >= 0;i--)

// Printing statement
#define dp_x(x) cout<<x<<endl
#define dp_xy(x,y) cout<<x<<" "<<y<<endl
#define nl cout<<"\n"
#define printArray(v) for(auto k:v)cout<<k<<" "
#define yes dp_x("Yes")
#define no dp_x("No")

// STL operation 
#define pb push_back
#define in insert
#define all(v) v.begin(),v.end()
#define asc(v) sort(all(v))
#define dsc(v) asc(v),reverse(all(v))
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);

// Precalculation
const ll mod = 1e9 + 7;
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

ll lenN(ll n)
{
    ll res = 0;
    while (n != 0)
    {
        res++;
        n /= 10;
    }
    return res;
}

ll binExp(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}

// Solution Start Here
bool possible(vll a, ll n, ll k) {
    multiset<ll>s;
    for (auto x : a)s.insert(x);
    for (ll i = 1;i <= k;i++) {
        if (s.empty())return false;
        ll req = k - i + 1;
        auto it = s.upper_bound(req);
        if (it == s.begin())return false;
        it--, s.erase(it);
        if (!s.empty()) {
            it = s.begin();
            ll val = (*it);
            val += req;
            s.erase(it);
            s.insert(val);
        }
    }
    return true;
}


void solve() {
    ll n, k;
    cin >> n;
    vll v(n);
    rep(i, n)cin >> v[i];
    ll low = 0, high = n;
    while (low <= high) {
        ll mid = low + (high - low)/2;
        if (possible(v, n, mid)) {
            k = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    dp_x(k);
}

int main() {
    Faster;
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
