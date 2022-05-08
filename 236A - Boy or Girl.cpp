#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    set<char> ch;
    cin >> s;

    for(auto a:s)
        ch.insert(a);

    if(ch.size()%2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
        
    return 0;
}
