// Contest Platform: Codeforces
// Contest Name : Educational Codeforces Round 134 (Rated for Div. 2)
// Problem Name : C. Min-Max Array Transformation
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
    ll n, zero;
    cin >> n;
    vll a(n), b(n), d;
    loop(i, 0, n - 1, 1)cin >> a[i];
    loop(i, 0, n - 1, 1)cin >> b[i];
    ll j = 0;
    for (ll i = 0;i < n;) {
        if (b[j] >= a[i]) {
            d.push_back(b[j] - a[i]);
            i++;
        }
        else j++;
    }
    printArray(d);nl;
    d.clear();
    j = n - 1;
    loopR(i,n-1,0,1) {
        d.pb(b[j] - a[i]);
        if (b[i - 1] < a[i])j = i - 1;
    }
    reverse(all(d));
    printArray(d);nl;
    d.clear();
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
