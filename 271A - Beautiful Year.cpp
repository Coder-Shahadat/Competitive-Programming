#include<bits/stdc++.h>
using namespace std;


int main(){
    int year;
    cin >> year;
    if(year>=1987 && year<2013)
        cout << 2013;
    else{
        while (true)
        {
            year++;
            int a = (year/1000) % 10;
            int b = (year/100) % 10;
            int c = (year/10) % 10;
            int d = (year) % 10;
            if(a!=b && b!=c && a!=c && a!=d && b!=d && c!=d)
                break;
        }
        cout << year;
    }
    return 0;
}
