// #include <bits/stdc++.h>
// typedef long long int ll;
// const unsigned int MOD = 1000000007;

// using namespace std;

// int main()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);


//     int n,m;
//     cin>>n>>m;

//     int frnds[n]={0};

//     int noble=n;
//     for(int i=0;i<m;i++)
//     {
//         int x,y;
//         cin>>x>>y;
//         if(x>y)
//             swap(x,y);

//         x--,y--;

//         if(frnds[x]==0)
//             noble--;

//         frnds[x]++;        
//     }

//     int q;
//     cin>>q;

//     while(q--)
//     {
//         int qt;
//         cin>>qt;

//         if(qt==1)
//         {
//             int x, y;
//             cin >> x >> y;
//             if (x > y)
//                 swap(x, y);

//             --x,--y;
//             if (frnds[x] == 0)
//                 noble--;
//             frnds[x]++;
//         }

//         if (qt == 2)
//         {
//             int x, y;
//             cin >> x >> y;
//             if (x > y)
//                 swap(x, y);

//             --x, --y;

//             frnds[x]--;
//             if (frnds[x] == 0)
//                 noble++;
//         }

//         if (qt == 3)
//         {
//             cout << noble << '\n';
//         }
//     }

// #ifndef ONLINE_JUDGE
//   cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
// #endif
//   return 0;
// }

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
#define yes dp_x("Yes")
#define no dp_x("No")

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

ll binExp(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}

// Solution Start Here
void solve() {
    ll n, m, x, y;
    cin >> n >> m;
    vll friends(n, 0);
    ll noble = n;
    rep(i, m) {
        cin >> x >> y;
        if (x > y)swap(x, y);
        x--, y--;
        if (friends[x] == 0)noble--;
        friends[x]++;
    }

    ll q, qq;
    cin >> q;
    while (q--) {
        cin >> qq;
        if (qq == 1) {
            cin >> x >> y;
            if (x > y)swap(x, y);
            x--, y--;
            if (friends[x] == 0)noble--;
            friends[x]++;
        }
        else if (qq == 2) {
            cin >> x >> y;
            if (x > y)swap(x, y);
            x--, y--;
            friends[x]--;
            if (friends[x] == 0)noble++;
        }
        else {
            dp_x(noble);
        }
    }
}

int main() {
    Faster;
    ll t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
