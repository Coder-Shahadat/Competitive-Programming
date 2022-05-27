#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    m = min(n, m);
    if(m%2)
        cout << "Akshat";
    else
        cout << "Malvika";
    return 0;
}
