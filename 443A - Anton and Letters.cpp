#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    set<char> ch;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++){
        if(s[i]>='a' && s[i]<='z')
            ch.insert(s[i]);
    }
    cout << ch.size();
}
