#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a, b, c, d;
    cin >> t;
    while (t--){
        cin >> n >> a >> b >> c >> d;
        int min_pkg = c - d, max_pkg = c + d;
        if (n * (a + b) >= min_pkg && n * (a - b) <= max_pkg){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
