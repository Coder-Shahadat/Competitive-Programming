#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (k > n)
            cout << k - n << endl;
        else{
            if (((n & 1) && (k % 2==0)) || ((n % 2==0) && (k & 1)))
            {
                cout << 1 << endl;
            }
            else
                cout << 0 << endl;
        }
    }
    return 0;
}
