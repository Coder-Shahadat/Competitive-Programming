#include<bits/stdc++.h>
using namespace std;


int main(){
    string s, cps;
    cin >> s;
    for (int i = 0; i < s.length(); i += 2)
    {
        cps.push_back(s[i]);
    }
    sort(cps.begin(), cps.end());
    for (int i = 0; i < cps.length() - 1; i++){
        cout << cps[i] << "+";
    }
    cout << cps[cps.length() - 1];
    return 0;
}
