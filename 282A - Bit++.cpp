#include <bits/stdc++.h>
using namespace std;


int main()
{
    string inp;
    int n,count=0;
    cin >> n;
    while(n--){
        cin >> inp;
        if(inp=="++X" || inp=="X++")
            count++;
        else
            count--;
    }
    cout << count;
    return 0;
}
