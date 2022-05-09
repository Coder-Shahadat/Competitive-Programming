#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, digits = 0;
    cin >> n;
    while (n)
    {
        if(n%10==4||n%10==7){
            digits++;
        }
        n /= 10;
    }
    if(digits==7 || digits==4)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
