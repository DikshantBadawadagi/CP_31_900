#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> freq;
        int max_freq = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
            max_freq = max(max_freq, freq[a[i]]);
        }

        if (max_freq == n) {
            cout << 0 << '\n';
            continue;
        }

        int curr = max_freq;
        int ops = 0;

        while (curr < n) {
            int can_add = min(curr, n - curr);
            ops += 1 + can_add; // 1 clone + can_add swaps
            curr += can_add;
        }

        cout << ops << '\n';
    }

    return 0;
}
