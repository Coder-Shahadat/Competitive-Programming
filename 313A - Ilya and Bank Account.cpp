#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t, n, temp;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if(n&1)
            cout << "YES" << endl;
        else{
            bool odd = false;
            temp = n;
            while (temp > 2)
            {
                temp /= 2;
                if (temp & 1)
                {
                    if (!(n % temp))
                    {
                        odd = true;
                        break;
                    }
                }
            }
            if(odd)
                cout << "YES" << endl;
            else
                cout << "NO"<<endl;
        }
        
    }
    
    return 0;
}
