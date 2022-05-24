#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, sum1, totalSum = 0, half, count = 0;
    cin >> n;
    int coin[n];
    for (int i = 0; i < n; i++){
        cin >> coin[i];
        totalSum += coin[i];
    }
    half = totalSum / 2;
    sort(coin,coin+n);
    for (int i = n - 1; i >= 0; i--){
        sum1 += coin[i];
        count++;
        if(sum1>half)
            break;
    }
    cout << count << endl;
    return 0;
}
