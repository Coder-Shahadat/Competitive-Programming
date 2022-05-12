#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, a, k, sum = 0;
    cin >> n;
    k = n;
    while (n--)
    {
        cin >> a;
        sum += a;
    }
    cout << sum / (float)k;
    return 0;
}
