#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    string s;
    set<char> ch;
    cin >> t;
    cin >> s;
    transform(s.begin(), s.end(),s.begin(),::tolower);
    
    for (int i = 0; i < s.length(); i++)
        ch.insert(s[i]);

    if(ch.size()==26)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
