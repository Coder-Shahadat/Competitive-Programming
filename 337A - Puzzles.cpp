#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int ar[m];
    for (int i = 0; i < m; i++)
        cin >> ar[i];
    sort(ar,ar+m);
    int minValue = ar[n - 1] - ar[0];
    for (int i = 1; i <= m - n; i++)
        if (ar[i + n - 1] - ar[i] < minValue)
            minValue = ar[i + n - 1] - ar[i];
    cout << minValue << endl;
    return 0;
}
