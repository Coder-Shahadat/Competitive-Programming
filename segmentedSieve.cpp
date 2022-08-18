#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll c = 1e6;

vector<int> primes;
void sieve()
{
    primes.clear();
    vector<ll> isPrime(c + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= c; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= c; j += i)
                isPrime[j] = false;
        }
    }
    for (ll i = 0; i <= c; i++)
        if (isPrime[i])
            primes.push_back(i);
}

void segmentedSieve(ll l, ll r) {
    vector<bool> isPrime(r - l + 1, true);
    l == 1 ? isPrime[0] = false : isPrime[0] = true;
    for (ll i = 0; primes[i] * primes[i] <= r;i++) {
        ll currentPrime = primes[i];
        ll base = (l / currentPrime) * currentPrime;
        base < l ? base += currentPrime : base;
        for (ll j = base; j <= r;j += currentPrime) {
            isPrime[j - l] = false;
        }
        base == currentPrime ? isPrime[base - l] = true : isPrime[base - l] = false;
    }
    for (ll j = 0; j < r - l + 1; j++)
    {
        if (isPrime[j])
            cout << j + l << endl;
    }
    cout << endl;
}

int main()
{
    ll t;
    sieve();
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        segmentedSieve(l, r);
    }
    return 0;
}