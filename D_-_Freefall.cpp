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
void solve() {
    double a, b;
    cin >> a >> b;
    ll r, l, l2, r2;
    l = -1, r = 1e18 / b;
    while (r - l > 2) {
        l2 = l + (r - l) / 3;
        r2 = r - (r - l) / 3;
        double ltrim, rtrim;
        ltrim = a / sqrt((double)l2 + 1) + b * l2;
        rtrim = a / sqrt((double)r2 + 1) + b * r2;
        if (ltrim > rtrim)l = l2;
        else r = r2;
    }
    double ans = min(a / sqrt(l2 + 1) + b * l2, a / sqrt(r2 + 1) + b * r2);
    cout << fixed << setprecision(10) << ans << endl;
}

int main() {
    Faster;
    ll t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
