#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll w, k, n, sum = 0;
    cin >> k >> n >> w;
    for (ll i = 1; i <= w; i++)
        sum += (i * k);
    
    if(sum>n)
        cout << sum - n;
    else
        cout << 0;
        
    return 0;
}
