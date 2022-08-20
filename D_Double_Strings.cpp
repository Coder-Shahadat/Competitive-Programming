// Contest Platform: 
// Contest Name : 
// Problem Name : 
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
    ll n, ai;
    cin >> n;
    vll ans;
    vstr v(n);
    map<string, ll>mp;
    loop(i, 0, n - 1, 1)cin >> v[i], mp[v[i]] = i + 1;
    loop(i, 0, n - 1, 1) {
        ll checker = 0;
        string temp = "", rest_temp;
        for (ll j = 0;j < v[i].size();j++) {
            temp += v[i][j];
            if (mp[temp]) {
                rest_temp.assign(v[i].begin() + j + 1, v[i].end());
                if (mp[rest_temp]) {
                    checker = 1;
                    ans.pb(1);
                    break;
                }
            }
        }
        if (!checker)
            ans.pb(0);
    }
    for (auto k : ans)cout << k;
    dp_x("");
}
int main()
{
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}
