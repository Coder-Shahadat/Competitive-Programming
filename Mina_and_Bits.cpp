// Contest Name :  Phitron Programming Contest 2022
// Problem Name :  Mina and Bits 
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

void solve() {
    ll n;
    cin >> n;
    n % 2 == 1 ? n += 1 : n;
    cout << (ll)log2(n) << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--)solve();
    return 0;
}
