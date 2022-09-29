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
typedef map<ll, ll> mpll;
typedef map<char, ll> mpcl;

// Loop
#define loop(i, Start, End, Inc) for (ll i = Start; i <= End; i += Inc)
#define loopR(i, Start, End, Dec) for (ll i = Start; i >= End; i -= Dec)

// Printing statement
#define dp_x(x) cout << x << endl
#define dp_xy(x, y) cout << x << " " << y << endl
#define nl "\n"
#define printArray(v) \
    for (auto k : v)  \
    cout << k << " "

// STL operation
#define pb push_back
#define in insert
#define all(v) v.begin(), v.end()
#define asc(v) sort(all(v))
#define dsc(v) asc(v), reverse(all(v))
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

// Precalculation
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

ll countDigits(ll n)
{
    ll res = 0;
    while (n != 1)
    {
        res++;
        n /= 10;
    }
    return res;
}

vll DigitsOfNumber(ll n)
{
    vll v;
    while (n != 1)
    {
        v.pb(n % 10);
        n /= 10;
    }
    reverse(all(v));
    return v;
}

// Solution Start Here
void solve()
{
    ll n, m;
    cin >> n >> m;
    bool flag1 = true, flag2 = true;
    if (n <= 1 or m <= 1)
    {
        dp_xy(n, m);
        return;
    }
    loop(i, 1, n, 1)
    {
        loop(j, 1, m, 1)
        {
            if (i - 2 < 1 and i + 2 > n and j + 2 > m and j - 2 < 1)
                flag1 = false;
            if (flag1 == false)
            {
                dp_xy(i, j);
                return;
            }
        }
    }
    dp_xy(n / 2, m / 2);
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
