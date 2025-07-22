#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n + 1), prefix(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }

        long long total_sum = prefix[n];

        while (q--) {
            int l, r;
            long long k;
            cin >> l >> r >> k;

            long long sub_sum = prefix[r] - prefix[l - 1];
            long long new_sum = total_sum - sub_sum + (r - l + 1) * k;

            if (new_sum % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
