#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int  main(){
    ll n, k;
    cin >> n >> k;
    while (k--){
        if(n%10)
            n--;
        else
            n = n / 10;
    }
    cout << n;

    return 0;
}
