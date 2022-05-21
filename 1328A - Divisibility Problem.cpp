#include<bits/stdc++.h>
using namespace std;
using ull = long long;

int main(){
    ull t, a, b, d, store;
    cin >> t;
    while (t--){
        cin >> a >> b;
        d = a % b;
        store = 0;
        if(d){
            store = ((a / b + 1) * b) - a;
        }
        cout << store << endl;
    }
    
    return 0;
}
