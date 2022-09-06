// Contest Platform: Codeforces
// Contest Name : Codeforces Round #819 (Div. 1 + Div. 2) and Grimoire of Code Annual Contest 2022
// Problem Name : A. Mainak and Array
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
    ll n;
    cin >> n;
    vll v(n), av, bv;
    loop(i, 0, n - 1, 1)cin >> v[i];
    ll Max = *max_element(all(v));
    ll Min = *min_element(all(v));
    if (v[0] == Min || v[n - 1] == Max) { dp_x(Max - Min); return; }
    ll MAX = 0;
    loop(i, 0, n - 2, 1) {
        if (v[i] > v[i + 1]) {
            MAX = max(MAX, v[i] - v[i + 1]);
        }
    }
    av = bv = v;
    sort(av.begin() + 1, av.end());
    sort(bv.begin(), bv.end() - 1);
    ll ans = max((av[n - 1] - av[0]), bv[n - 1] - bv[0]);
    dp_x(max(ans,MAX));
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
