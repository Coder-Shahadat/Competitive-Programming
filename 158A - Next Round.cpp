#include<bits/stdc++.h>
using namespace std;
vector<int> v;


int main()
{
    int count = 0, n, k, ai;
    cin >> n >> k;
    k--;
    for (int i = 0; i < n; i++){
        cin >> ai;
        v.push_back(ai);
    }
    for (int i = 0; i < n; i++)
    {
        if(v[k]<=v[i] && v[i]>0)
            count++;
    }
    cout << count;
    return 0;
}
