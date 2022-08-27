// Contest Platform: Codeforces
// Contest Name : Educational Codeforces Round 134 (Rated for Div. 2)
// Problem Name : B. Deadly Laser
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
    ll n, m, sx, sy, d, ans;
    cin >> n >> m >> sx >> sy >> d;
    ll up = sx - d, down = sx + d;
    ll left = sy - d, right = sy + d;

    //condition
    if (left <= 1 && right >= m)ans = -1;
    else if (up <= 1 && down >= n)ans = -1;
    else if (up <= 1 && left <= 1)ans = -1;
    else if (down >= n && right >= m)ans = -1;
    else ans = m + n - 2;
    dp_x(ans);
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
