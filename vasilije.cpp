#include <iostream>
using namespace std;

using ll = long long;

bool isPossible(ll n, ll k, ll x) {
    // Min sum: 1 + 2 + ... + k = k * (k + 1) / 2
    ll min_sum = k * (k + 1) / 2;

    // Max sum: sum of last k numbers in 1..n
    // = sum(1..n) - sum(1..(n-k))
    ll max_sum = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;

    return x >= min_sum && x <= max_sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k, x;
        cin >> n >> k >> x;
        cout << (isPossible(n, k, x) ? "YES\n" : "NO\n");
    }
    return 0;
}
