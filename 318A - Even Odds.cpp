#include<bits/stdc++.h>
using namespace std;
using ull = long long;

int main(){
    ull n, k, i;
    cin >> n >> k;
    if(n%2)
        n++;
    n /= 2;

    if(k>n){
        k = k - n;
        i = 2;
    }
    else{
        i = 1;
    }
    
    k--;
    while (k--)
            i += 2;
    cout << i << endl;
    return 0;
}
