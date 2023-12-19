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
    string s;
    cin >> s;
    ll cnt = 0, track = 0;
    rep(i, s.length())
    {
        if (s[i] != '0')
            cnt++;
        if (cnt == 2)
        {
            track = i;
            break;
        }
    }
    string a = "", b = "";
    rep(i, track) a+= s[i];
    // cout << " ";
    rep(i, s.length() - track) b += s[i + track];
    // cout << endl;
    if(a==b || cnt<2 || stoll(a)>=stoll(b))
        dp_x(-1);
    else dp_xy(a, b);
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
