// Contest Platform: Codeforces
// Contest Name : Codeforces Round #799 (Div. 4)
// Problem Name : D. The Clock
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
    string total, s, temp_h, temp_m;
    ll x, total_min, c = 0;
    cin >> s >> x;
    temp_h = s[0];temp_h += s[1];
    ll h = stoll(temp_h);
    temp_m = s[3];temp_m += s[4];
    ll min = stoll(temp_m);
    if (s[0] == s[4] && s[1] == s[3])c++;
    total_min = h * 60 + min;
    ll store = total_min;
    while (true)
    {
        total_min += x;
        if (total_min >= 1440) { total_min -= 1440;}
        if(total_min==store)break;
        h = total_min / 60, min = total_min % 60;
        temp_h = to_string(h).length() > 1 ? to_string(h) : '0' + to_string(h);
        temp_m = to_string(min).length() > 1 ? to_string(min) : '0' + to_string(min);
        if (temp_h[1] == temp_m[0] && temp_h[0] == temp_m[1])c++;
    }
    dp_x(c);
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
