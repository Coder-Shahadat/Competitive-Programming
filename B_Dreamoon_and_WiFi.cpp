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
#define yes dp_x("yes")
#define no dp_x("no")
#define YES dp_x("YES")
#define NO dp_x("NO")
#define Yes dp_x("Yes")
#define No dp_x("No")

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

ll binExp(ll a,ll b){
    ll ans = 1;
    while(b){
        if(b&1)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}

// Solution Start Here
void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    ll posStr1 = 0,cnt=0, posStr2 = 0,unRecognize=0;
    rep(i, s1.length())
    {
        if(s1[i]=='+')
            posStr1++;
        if(s2[i]=='+')
            posStr2++;
        if(s2[i]=='?')
            unRecognize++;
    }
    // 1<<unRecognize mean number of way to because everyTime the bitset will be changed
    // based on number and where '+' is 1 and '-' is 0
    rep(i,1<<unRecognize){
        // __builtin_popcount used to determined how many one in binary
        // representation of a number 
        if(__builtin_popcount(i)+posStr2==posStr1)
            cnt++;
    }
    cout << fixed << setprecision(12) << 1.*cnt / (1 << unRecognize) << endl;
}

int main() {
    Faster;
    ll t=1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
