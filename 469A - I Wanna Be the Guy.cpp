#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    int n,p,q,pi,qi;
    cin >> n;
    cin >> p;
    while (p--){
        cin >> pi;
        s.insert(pi);
    }
    cin >> q;
    while(q--){
        cin >> qi;
        s.insert(qi);
    }
    if(n-s.size())
        cout << "Oh, my keyboard!";
    else
        cout << "I become the guy.";
    return 0;
}
