#include<bits/stdc++.h>
using namespace std;
const int n = 1e5+10;
long long fact[n];
const int m = 1e9 + 7;

int main()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < n; i++)
        fact[i] = (fact[i - 1] * i) % m;
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << fact[n] << endl;
    }
    
    return 0;
}
