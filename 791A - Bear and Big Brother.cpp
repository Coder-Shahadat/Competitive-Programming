#include<bits/stdc++.h>
#define k 100
using namespace std;


int main(){
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= k; i++)
    {
        if((pow(3,i)*a)>(pow(2,i)*b)){
            cout << i;
            break;
        }
    }
        return 0;
}
