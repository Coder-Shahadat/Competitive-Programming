// Contest Platform: Codeforces
// Contest Name : Codeforces Round #816 (Div. 2)
// Problem Name : B. Beautiful Array
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
#define endl "\n"
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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    if (k * b <= s) {
        ll lastValue = min(s, k * b + k - 1);
        if ((n - 1) * (k - 1) < s - lastValue) {
            dp_x(-1);
            return;
        }
        vll ans(n);
        ans[n - 1] = lastValue;
        s -= lastValue;
        loopR(i, n - 2, 0, 1) {
            if (s == 0)ans[i] = 0;
            else if (s <= k - 1)ans[i] = s, s = 0;
            else if (s > k - 1)ans[i] = k - 1, s -= (k - 1);
        }
        printArray(ans);cout << endl;
    }
    else dp_x(-1);
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
