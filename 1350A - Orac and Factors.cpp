#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const long long MAX = 1e6;
vector<ll> a(MAX);
// ll a[MAX];
 
void divisor(){
    for(ll i=2;i<=MAX;i+=2)
        a[i] = 2;
    for (ll i = 3; i <= MAX;i+=2){
        for (ll j = i; j <= MAX; j += i){
            if(a[j]==0)
                a[j] = i;
        }
    }
}
 
 
int main(){
    ll t, n, k;
    divisor();
    cin >> t;
    while (t--){
        cin >> n >> k;
        if(!(n%2)){
            n += (k * 2);
            cout << n << endl;
        }
        else{
            n += (a[n] + (k - 1) * 2);
            cout << n << endl;
        }
    }
    return 0;
}
