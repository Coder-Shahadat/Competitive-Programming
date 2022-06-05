#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++){
        if(s[0]!='1'){
            cout << "NO" << endl;
            return 0;
        }
        else if (s[i] == '4')
        {
            count++;
            if (count > 2)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        else if(s[i]=='1'){
            count = 0;
        }
        else if (s[i] != '1' || s[i] != '4')
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
