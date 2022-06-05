#include<bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int>::iterator it;
 
int main(){
    int t, n, ai,MAX;
    cin >> t;
    while(t--){
        cin >> n;
        MAX = 0;
        for (int i = 0; i < n;i++){
            cin >> ai;
            MAX = max(MAX, ai);
            v.push_back(ai);
        }
        int count = 1;
        for (int i = 0; i < n-1;i++){
            if(v[i]==v[i+1])
                count++;
            if(count==n){
                cout << -1 << endl;
                continue;
            }
        }
        for (int i = 0; i<v.size();i++)
        {
            if(MAX==v[i]){
                if (v[i] > v[i - 1] && i > 0){
                    cout << i+1 << endl;
                    break;
                }
                if (v[i] > v[i + 1] && i < n - 1){
                    cout << i+1 << endl;
                    break;
                }
            }
        }
        v.clear();
    }
}
