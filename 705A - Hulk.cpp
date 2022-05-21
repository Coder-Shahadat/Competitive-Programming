#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    for (int i = 1; i <= n;i++){
        if(i%2 && i<n)
            cout << "I hate that ";
        else if(i%2==0 && i<n)
            cout << "I love that ";
        else if(i==n && i%2==0)
            cout << "I love it";
        else
            cout << "I hate it";
    }
    return 0;
}
