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
// vector<vll> ans;
// void permute(vll& v, ll idx) {
//     if (idx == v.size()) {
//         ans.pb(v);
//         return;
//     }
//     ll n = v.size();
//     for (ll i = idx;i < n;i++) {
//         swap(v[i], v[idx]);
//         permute(v, idx + 1);
//         swap(v[i], v[idx]);
//     }
//     return;
// }
// void solve() {
//     ll n;cin >> n;
//     vll v(n);
//     for (auto& x : v)cin >> x;
//     permute(v, 0);
//     for (auto x : ans) {
//         for (auto i : x)
//             cout << i << " ";
//         nl;
//     }
// }

// STL 
// void solve() {
//     ll n;cin >> n;
//     vll v(n);vector<vll>ans;
//     for (auto& i : v)cin >> i;
//     asc(v);
//     do {
//         ans.pb(v);
//     } while (next_permutation(all(v)));
//     for (auto temp : ans) {
//         for (auto x : temp)
//             cout << x << " ";nl;
//     }
// }


// recursive way 
// void helper(vll num, vector<vll>& ans, ll idx) {
//     ll n = num.size();
//     if (idx == n) {
//         ans.pb(num);
//         return;
//     }
//     for (ll i = idx;i < n;i++) {
//         if (i != idx and num[i] == num[idx]) continue;
//         swap(num[i], num[idx]);
//         helper(num, ans, idx + 1);
//     }
// }

// vector<vll>permute(vll num) {
//     asc(num);
//     vector<vll>ans;
//     helper(num, ans, 0);
//     return ans;
// }

// void solve() {
//     ll n;cin >> n;
//     vll v(n);
//     for (auto& i : v)cin >> i;
//     asc(v);
//     vector<vll>res = permute(v);
//     for (auto temp : res) {
//         for (auto x : temp)
//             cout << x << " ";
//         nl;
//     }
// }

// STL way 
void solve() {
    ll n;cin >> n;
    vll v(n);vector<vll>ans;
    for (auto& x : v)cin >> x;
    asc(v);
    do {
        ans.pb(v);
    } while (next_permutation(all(v)));
    for (auto res : ans) {
        printArray(res);nl;
    }
}

int main() {
    Faster;
    ll t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
