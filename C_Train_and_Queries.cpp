// Contest Platform: Codeforces
// Contest Name : Codeforces Round #805 (Div. 3)
// Problem Name : C. Train and Queries
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
#define asc(v) sort(v.begin(),v.end())
#define dsc(v) sort(v.begin(),v.end()),reverse(v.begin(),v.end())
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }

void solve() {
    ll n, k, ai;
    cin >> n >> k;
    multimap<ll, ll>mp;
    map<ll, ll>mpc;
    loop(i, 1, n, 1) {
        cin >> ai;
        mp.insert({ ai,i });
        mpc[ai]++;
    }
    while (k--)
    {
        ll l, r;
        cin >> l >> r;
        if (mpc[l] && mpc[r]) {
            auto l_f = mp.find(l);
            auto range = mp.equal_range(r);
            auto r_f = range.second;r_f--;
            if (l_f->second < r_f->second)dp_x("YES");
            else dp_x("NO");
        }
        else dp_x("NO");
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
