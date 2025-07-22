#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int cnt1 = 0, cnt0 = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] == 1) cnt1++;
            else if (a[i] == 0) cnt0++;
        }

        long long result = cnt1 * (1LL << cnt0);
        cout << result << '\n';
    }
    return 0;
}
