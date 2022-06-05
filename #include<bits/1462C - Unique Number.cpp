#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
    ll t, n;
    cin >> t;
    while(t--){
        set<int> S;
        string s;
        cin >> n;
        ll x = 9;
        ll sum = 0;
        if (n < 10)
        {
            cout << n << endl;
            continue;
        }
        while(x>0){
            if(n-sum>=x){
                sum += x;
                s += (x + '0');
                S.insert(x);
            }
            x--;
        }
        if (n != sum || s.length() != S.size())
            cout << "-1" << endl;
        else{
            sort(s.begin(), s.end());
            cout << s << endl;
        }
    }
    return 0;
}
