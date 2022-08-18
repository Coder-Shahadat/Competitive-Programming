// Contest Platform: Codeforces
// Contest Name : CodeTON Round 2 (Div. 1 + Div. 2, Rated, Prizes!)
// Problem Name : C. Virus
// Author: MD.Shahadat Hossain Bhuian
// Codeforces userName : __Shahadat__
// CodeChef userName : shahadat_43
//---------------------------------------------

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll>v(m),diff;
    for (ll i = 0;i < m;i++)cin >> v[i];
    sort(v.begin(), v.end());
    for (ll i = 0;i < m - 1;i++)diff.push_back(v[i + 1] - v[i] - 1);
    diff.push_back(v[0] + n - v[m - 1] - 1);
    sort(diff.begin(), diff.end(), greater<ll>());
    ll safe, inf;
    safe = inf = 0;
    for (ll i = 0;i < diff.size();i++) {
        ll curr = diff[i];
        curr -= (2 * inf);
        if (curr <= 0)break;
        safe += (curr - 1);
        if (curr == 1)safe++;
        inf += 2;
    }
    cout << n - safe << endl;
}

int main(){ 
    Faster; 
    ll t;  
    cin>>t;
    while(t--)solve();
    return 0;
}