// Author: MD.Shahadat Hossain Bhuian
// Codeforces userName : __Shahadat__
// CodeChef userName : shahadat_43
//---------------------------------------------

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, a, ck=1;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if(a){
            cout << "HARD";
            ck = 0;
            break;
        }
    }
    if(ck)
        cout << "EASY";
    return 0;
}
    
