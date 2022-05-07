#include<bits/stdc++.h>
using namespace std;


int main(void)
{
    int n;
    int count = 0;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a&b || b&c || a&c)
            count++;
    }
    cout << count;
    return 0;
}
