#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n], y[n], count = 0;
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if(x[i]==y[j])
                count++;
                
    cout << count << endl;
    return 0;
}
