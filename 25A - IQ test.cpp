#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, x, even = 0, lastEven = 0, lastOdd = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> x;
        if(x%2){
            even -= 1;
            lastOdd = i;
        }
        else{
            even += 1;
            lastEven = i;
        }
    }
    cout << (even > 0 ? lastOdd : lastEven) << endl;
    return 0;
}
