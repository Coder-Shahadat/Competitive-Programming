#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, count = 0;
    cin >> n;
    count = n / 5;
  
    if(n%5)
        count++;
    cout << count;
    return 0;
}
