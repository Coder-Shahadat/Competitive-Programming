#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2, final_s;
    cin >> s1;
    cin >> s2;
    for (int i = 0; i < s1.length(); i++){
        if(s1[i]!=s2[i]){
            final_s.push_back('1');
        }
        else
            final_s.push_back('0');
    }
    cout << final_s;
    return 0;
}
