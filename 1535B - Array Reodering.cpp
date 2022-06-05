#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t, n, ai;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, [](int x, int y)
             { return x % 2 < y % 2; });
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(a[i], a[j] * 2) > 1)
                    count++;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}
