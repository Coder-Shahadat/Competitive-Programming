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
    string s;
    cin >> s;
    ll n = s.length();
    char mx = max(s[0], s[n - 1]);
    char mn = min(s[0], s[n - 1]);
    vector<pair<char, ll>> vp;
    loop(i, 0, n - 1, 1){
        if (s[i] >= mn and s[i] <= mx){
            vp.push_back({s[i], i});
        }
    }
    sort(all(vp), [&](pair<char, ll> a, pair<char, ll> b)
         { return a.second < b.second; });

    if (vp.size() > 2){
        sort(vp.begin() + 1, vp.begin() + vp.size() - 1, [&](pair<char, ll> a, pair<char, ll> b)
             {
            if(s[0]>s[n-1]){
                return a.first > b.first;
            }
        return a.first < b.first; });
    }

    ll moves = 0;
    vll seq;
    seq.push_back(1);
    for (ll i = 1; i < vp.size(); i++){
        moves += abs(vp[i - 1].first - vp[i].first);
        seq.push_back(vp[i].second + 1);
    }
    cout << moves << " " << seq.size() << endl;
    printArray(seq);
    cout << endl;
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
