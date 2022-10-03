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
#define loop(i, Start, End, Inc) for (ll i = Start; i <= End; i += Inc)
#define loopR(i, Start, End, Dec) for (ll i = Start; i >= End; i -= Dec)

// Printing statement
#define dp_x(x) cout << x << endl
#define dp_xy(x, y) cout << x << " " << y << endl
#define nl cout << "\n"
#define printArray(v) \
    for (auto k : v)  \
    cout << k << " "
#define yes dp_x("Yes")
#define no dp_x("No")

// STL operation
#define pb push_back
#define in insert
#define all(v) v.begin(), v.end()
#define asc(v) sort(all(v))
#define dsc(v) asc(v), reverse(all(v))
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

// Precalculation
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

// Solution Start Here
void solve()
{
    ll n, k, r, c, x, y;
    cin >> n >> k >> r >> c;
    r--, c--;
    vector<vector<char>> v(n, vector<char>(n, '.'));
    v[r][c] = 'X';
    x = r, y = c;
    while (x >= 0)
    {
        loop(i, y, n - 1, k) v[x][i] = 'X';
        loopR(i, y, 0, k) v[x][i] = 'X';
        x--, y++;
        if (y >= n)
            y = 0;
    }
    x = r, y = c;
    while (x < n)
    {
        loop(i, y, n - 1, k) v[x][i] = 'X';
        loopR(i, y, 0, k) v[x][i] = 'X';
        x++, y--;
        if (y < 0)
            y = n - 1;
    }
    loop(i, 0, n - 1, 1)
    {
        loop(j, 0, n - 1, 1)
        {
            cout << v[i][j];
        }
        nl;
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
