#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);

    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]<s2[i]){
            cout << -1;
            break;
        }
        else if (s1[i] > s2[i]){
            cout << 1;
            break;
        }        
        if(i==s1.size()-1)
            cout << 0;
    }
    return 0;
}
