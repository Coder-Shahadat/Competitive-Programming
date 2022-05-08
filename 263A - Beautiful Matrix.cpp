#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n = 5,arr[n+1][n+1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if(arr[i][j]==1){
                cout << abs(3 - i) + abs(3 - j) << endl;
                break;
            }
        }
    }
    return 0;
}
