#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, t;
    cin >> n >> t;
    char ch[n];
    for (int i = 0; i < n;i++)
        cin >> ch[i];

    while (t--){
        for (int i = 0; i < n; i++){
            if (ch[i] == 'B' && ch[i + 1] == 'G'){
                swap(ch[i], ch[i + 1]);
                i++;
            }
        }          
    }
    for(auto c:ch)
        cout << c;
        
    return 0;
}
