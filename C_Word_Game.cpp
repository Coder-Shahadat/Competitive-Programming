// Contest Platform: Codeforces
// Contest Name : Codeforces Round #817 (Div. 4)
// Problem Name : C. Word Game
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
    vstr s[3];
    map<string, ll>mp;
    loop(i, 0, 2, 1) {
        string temp;
        loop(j, 1, n, 1) {
            cin >> temp;
            s[i].push_back(temp);
            mp[temp]++;
        }
    }
    ll c[3] = {0};
    loop(i, 0, 2, 1) {
        loop(j, 0, n-1, 1) {
            if (mp[s[i][j]] == 3)continue;
            else if (mp[s[i][j]] == 2)c[i]++;
            else if (mp[s[i][j]] == 1)c[i] += 3;
        }
    }
    cout << c[0] << " "<<c[1] << " " << c[2] << endl;
}

int main() {
    Faster;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
