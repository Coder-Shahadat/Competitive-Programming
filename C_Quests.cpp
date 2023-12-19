// Author: MD.Shahadat Hossain Bhuian
// Codeforces userName : __Shahadat__
// CodeChef userName : shahadat_43
//---------------------------------------------

// Libary
#include <bits/stdc++.h>
using namespace std;

// Type definition
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<string> vstr;
typedef vector<pll> vpl;
typedef set<ll> sll;

// Loop
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rev(i, n) for (ll i = n - 1; i >= 0; i--)

// Printing statement
#define dp_x(x) cout << x << endl
#define dp_xy(x, y) cout << x << " " << y << endl
#define nl cout << "\n"
#define printArray(v) \
    for (auto k : v)  \
    cout << k << " "
#define yes dp_x("yes")
#define no dp_x("no")
#define YES dp_x("YES")
#define NO dp_x("NO")
#define Yes dp_x("Yes")
#define No dp_x("No")

// STL operation
#define pb push_back
#define in insert
#define all(v) v.begin(), v.end()
#define asc(v) sort(all(v))
#define dsc(v) asc(v), reverse(all(v))
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

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

ll binExp(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}

// Solution Starts Here
void solve()
{
    priority_queue<ll> pq;
    ll n, k;
    cin >> n >> k;
    vll a(n), b(n);
    rep(i, n)cin >> a[i];
    rep(i, n)cin >> b[i];
    ll ans = 0, i = 0,temp=0;
    while (i < n)
    {
        if (k == 0)
            break;
        k--;
        temp += a[i];
        pq.push(b[i]);
        ans = max(temp + k * pq.top(), ans);
        i++;
    }
    dp_x(ans);
}

int main()
{
    Faster;
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
