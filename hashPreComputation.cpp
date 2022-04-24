#include<bits/stdc++.h>
using namespace std;
const int  N = 1e7 + 10;
long long hsh[N];


int main()
{
    int n,t;
    // array size 
    cin >> n;
    int arr[n];
    // array element entry
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // pre compute
        hsh[arr[i]]++;
    }

    // number of queries
    cin >> t;
    while (t--)
    {
        int temp;
        cin >> temp;
        cout << hsh[temp] << endl;
    }
    return 0;
}