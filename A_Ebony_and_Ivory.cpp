// Contest Platform: Codeforces
// Contest Name : Manthan, Codefest 16
// Problem Name : A. Ebony and Ivory
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
    ll a, b, c;
    cin >> a >> b >> c;
    if (c % a == 0 || c % b == 0) { dp_x("Yes");return; }

    loop(i, 1, 10000, 1) {
        loop(j, 1, 10000, 1) {
            if (c % (a * i + b * j) == 0) {
                dp_x("Yes");
                return;
            }
            else if ((a * i + b * j) > c)break;
        }
    }
    dp_x("No");
}

int main() {
    Faster;
    // ll t;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}
