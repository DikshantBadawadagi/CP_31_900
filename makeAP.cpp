#include <iostream>
using namespace std;

bool isValid(int original, int target) {
    // We can only multiply original by a positive integer to get target
    return target % original == 0 && target / original > 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Try changing a
        int new_a = 2 * b - c;
        if (new_a > 0 && isValid(a, new_a)) {
            cout << "YES\n";
            continue;
        }

        // Try changing b
        int sum_ac = a + c;
        if (sum_ac % 2 == 0) {
            int new_b = sum_ac / 2;
            if (isValid(b, new_b)) {
                cout << "YES\n";
                continue;
            }
        }

        // Try changing c
        int new_c = 2 * b - a;
        if (new_c > 0 && isValid(c, new_c)) {
            cout << "YES\n";
            continue;
        }

        cout << "NO\n";
    }
    return 0;
}
