// Contest Platform: Codeforces
// Contest Name : Codeforces Round #805 (Div. 3)
// Problem Name : D. Not a Cheap String
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
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

void solve() {
    string s, temp;ll p;
    cin >> s >> p;temp = s;
    dsc(s);
    map<char, ll>mp;
    map<ll, ll>rmp;
    ll j = 1;
    loop(i, 'a', 'z', 1)mp[i] = j, j++;
    ll sum = 0, idx = 0;
    loop(i, 0, s.length() - 1, 1)sum += mp[s[i]];
    loop(i, 0, s.length() - 1, 1) {
        if (p >= sum)break;
        sum -= mp[s[i]];
        idx++;
    }
    loop(i, idx, s.length() - 1, 1) rmp[s[i]]++;
    loop(i, 0, temp.length() - 1, 1) {
        if (rmp[temp[i]]) {
            cout << temp[i];
            rmp[temp[i]]--;
        }
    }
    dp_x("");
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

