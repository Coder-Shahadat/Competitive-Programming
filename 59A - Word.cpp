#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    int upper = 0, lower = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        if(isupper(s[i]))
            upper++;
        if(islower(s[i]))
            lower++;
    }
    if(upper>lower)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s;
    return 0;
}
