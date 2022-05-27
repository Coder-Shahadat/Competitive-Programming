#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n>0){
        cout << n << endl;
        return 0;
    }
    else{
        int Max = n / 10;
        Max = max(Max, (n / 100 * 10 + n % 10));
        cout << Max << endl;
    }
    return 0;
}
