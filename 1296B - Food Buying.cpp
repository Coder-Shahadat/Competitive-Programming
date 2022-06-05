#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        // int count;
        // count = n / 10;
        // int temp = (n % 10) + count;
        // if(temp>=10)
        //     count += temp / 10;
        // cout << n + count << endl;
        int count = n / 10; //987
        int temp = (n % 10) + count; //987+6=993
        while(1){
            count += temp / 10; //987+99+10
            if(temp>=10)
                temp = (temp % 10) + temp / 10; // 3+99=102
            else{
                cout << count + n << endl;
                break;
            }
        }
    }
    return 0;  
}
