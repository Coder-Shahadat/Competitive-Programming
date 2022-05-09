#include<bits/stdc++.h>
using namespace std;


int main(){
    int t, a, b, max = 0, sum = 0;
    cin >> t;
    while (t--){
        cin >> a >> b;
        sum += b - a;
        if(sum>max)
            max = sum;
    }
    cout << max;

    return 0;
}
