#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, A = 0, D = 0;
    cin >> n;
    char ch[n];
    for (int i = 0; i < n; i++){
        cin >> ch[i];
        if(ch[i]=='A')
            A++;
        else
            D++;
    }
    if(A>D)
        cout << "Anton";
    else if(A<D)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;

}
