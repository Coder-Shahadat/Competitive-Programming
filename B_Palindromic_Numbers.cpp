// Contest Platform: Codeforces
// Contest Name : Codeforces Round #802 (Div. 2)
// Problem Name : B. Palindromic Numbers 
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
#define all(v) v.begin(),v.end()
#define loop(i,Start,End,Inc) for(ll i=Start;i<=End;i+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)
#define dp_x(x) cout<<x<<endl
#define dp_xy(x,y) cout<<x<<" "<<y<<endl
#define endl "\n"
#define pb push_back
#define asc(v) sort(v.begin(),v.end())
#define dsc(v) sort(v.begin(),v.end()),reverse(v.begin(),v.end())
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

void solve() {
    ll n;char ch;
    cin >> n;
    string s, ans;
    loop(i, 0, n - 1, 1)cin >> ch, s.pb(ch);
    ll verify = s[0] - '0';
    if (verify != 9) {
        loop(i, 0, n - 1, 1) {
            ll y = s[i] - '0';
            y = 9 - y;
            ans += (y + '0');
        }
    }
    else {
        ll c = 0;
        loopR(i, n - 1, 0, 1) {
            ll x = s[i] - '0';
            x += c;
            if (x > 1) {
                ll y = 11 - x;
                c = 1;
                ans += (y + '0');
            }
            else {
                ll y = 1 - x;
                c = 0;
                ans += (y + '0');
            }
        }
        reverse(all(ans));
    }
    dp_x(ans);
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
