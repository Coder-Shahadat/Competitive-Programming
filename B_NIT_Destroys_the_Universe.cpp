// Contest Platform: Codeforces
// Contest Name : Codeforces Global Round 21
// Problem Name : B. NIT Destroys the Universe
// Author: MD.Shahadat Hossain Bhuian
// Codeforces userName : __Shahadat__
// CodeChef userName : shahadat_43
//---------------------------------------------

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<string> vstr;
typedef vector<pll> vpl;
typedef set<ll> sll;
#define loop(i,Start,End,Inc) for(ll i=Start;i<=End;i+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)
#define dp_x(x) cout<<x<<endl
#define dp_xy(x,y) cout<<x<<" "<<y<<endl
#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define asc(v) sort(v.begin(),v.end())
#define dsc(v) sort(v.begin(),v.end()),reverse(v.begin(),v.end())
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

void solve() {
    ll n;
    cin >> n;
    vll v(n);
    loop(i, 0, n - 1, 1)cin >> v[i];
    if (count(all(v), 0) == n) {
        dp_x(0);
        return;
    }
    else if (count(all(v), 0) == 0) {
        dp_x(1);
        return;
    }
    ll c = 0;
    loop(i, 0, n - 1, 1) {
        if (v[i] == 0)continue;
        if (i == n - 1 or v[i + 1] == 0)c++;
    }
    c == 1 ? dp_x(1) : dp_x(2);
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

