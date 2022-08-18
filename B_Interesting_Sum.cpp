// Contest Platform: Codeforces
// Contest Name : Codeforces Round #815 (Div. 2)
// Problem Name : B. Interesting Sum
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
    ll n;
    cin >> n;
    vector<ll>v(n + 1);v[0] = 0;
    for (ll i = 1;i <= n;i++)cin >> v[i];
    sort(v.begin(), v.end());
    cout << v[n] - v[1] + v[n - 1] - v[2] << endl;
}

int main(){ 
    Faster; 
    ll t;  
    cin>>t;
    while(t--)solve();
    return 0;
}