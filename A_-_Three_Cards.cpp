// Contest Platform: AtCoder
// Contest Name : AtCoder Regular Contest 146
// Problem Name : A - Three Cards 
// Author: MD.Shahadat Hossain Bhuian
// Codeforces userName : __Shahadat__
// CodeChef userName : shahadat_43
//---------------------------------------------

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpl;
typedef set<ll> sll;
#define dp_x(x) cout<<x<<endl
#define dp_xy(x,y) cout<<x<<" "<<y<<endl
#define endl "\n"
#define pb push_back
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n), c;
    for (ll i = 0;i < n;i++)cin >> v[i];
    sort(v.begin(), v.end());
    ll f = v[n - 1];
    ll s = v[n - 2];
    ll t = v[n - 3];
    string s1 = to_string(f);
    string s2 = to_string(s);
    string s3 = to_string(t);
    string t1 = s1 + s2 + s3;
    string t2 = s1 + s3 + s2;
    string t3 = s2 + s1 + s3;
    string t4 = s2 + s3 + s1;
    string t5 = s3 + s1 + s2;
    string t6 = s3 + s2 + s1;

    c.pb(stoull(t1));
    c.pb(stoull(t2));
    c.pb(stoull(t3));
    c.pb(stoull(t4));
    c.pb(stoull(t5));
    c.pb(stoull(t6));
    sort(c.begin(), c.end());
    dp_x(c[5]);
}

int main() {
    Faster;
    // ll t;  
    // cin>>t;
    // while(t--)
    solve();
    return 0;
}