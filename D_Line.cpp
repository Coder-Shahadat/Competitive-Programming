// Contest Platform: Codeforces
// Contest Name : Codeforces Round #817 (Div. 4)
// Problem Name : D. Line
// Author: MD.Shahadat Hossain Bhuian
// Codeforces userName : __Shahadat__
// CodeChef userName : shahadat_43
//---------------------------------------------

// Libary 
#include<bits/stdc++.h>
using namespace std;

// Type definition
typedef long long int ll;
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
    int n;
    cin >> n;
    vector<char>ch(n);
    vll v;ll sum = 0;
    int i = 0, j = n - 1, s = 0;
    loop(i, 0, n - 1, 1)cin >> ch[i];
    loop(i, 0, n - 1, 1)sum += (ch[i] == 'R' ? n - i - 1 : i);
    while (i < j) {
        if (ch[i] == 'L')s = n - 1 - i - i, v.pb(s);
        if (ch[j] == 'R')s = j - (n - 1 - j), v.pb(s);
        i++, j--;
    }
    loop(i, 0, n - 1, 1) {
        if (i >= v.size()) {
            cout << sum << " ";
        }
        else sum += v[i], cout << sum << " ";
    }nl;
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}