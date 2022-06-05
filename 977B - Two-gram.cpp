#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, res = 0;
    cin >> n;
    string s, ans, first, second;
    cin >> s;
    for (int i = 0; i < s.length() - 1; i++){
        int curl = 0;
        for (int j = 0; j < s.length() - 1; j++){
            if (s[j] == s[i] && s[j + 1] == s[i + 1]){
                curl++;
            }
        }
        if(res<curl){
            res = curl;
            first = s[i];
            second = s[i + 1];
        }
    }
    cout << first << second << endl;
    return 0;
}
