#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, count = 0;
    cin >> n;
    char c[n];
    for (int i = 0; i < n; i++){
        cin >> c[i];
    }
    for (int i = 0; i < n-1; i++){
        if(c[i]==c[i+1])
            count++;
    }
    cout << count;
    return 0;
}
