#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,i=4;
    set<int> s;
    while (i--)
    {
        cin >> a;
        s.insert(a);
    }
    cout << 4 - s.size();
    return 0;
}
