#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,odd,even;
    cin>>n;
    // formula for finding 2+4+6+....+2n
    // sum=n*(n-1) //Here n means number of even number
    even = (n/2) * ((n/2) + 1);
    if(n%2) {
    // formula for finding 1+3+5+....+(2n+1)
    // sum=n*n //Here n means number of odd number
        odd = n / 2 + 1;  //Ex: 9/2=4 but no of odd are 5 so added extra 1
        odd = odd * odd;
    }
    else{
        odd = n / 2; //Ex: 10/2=5 number of odd is 5 no need to add 1
        odd = odd * odd;
    }
    cout << even - odd;
    return 0;
}
