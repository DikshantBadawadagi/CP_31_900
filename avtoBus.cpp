#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 != 0) {
            // Odd number of wheels can't be distributed among 4 or 6-wheel buses
            cout << -1 << endl;
            continue;
        }

        // Minimum number of buses (maximize the number of 6-wheel buses)
        long long min_buses, max_buses;

        // If n is divisible by 6, that's the minimum number of buses
        // Else, we need to make up for the remainder using one 4-wheel bus
        min_buses = (n + 5) / 6;
        if ((n - 4) % 6 == 0) {
            min_buses = (n - 4) / 6 + 1;
        }

        // Maximum number of buses (maximize the number of 4-wheel buses)
        max_buses = n / 4;

        // Check if it's possible to form such combinations
        if ((min_buses * 4 <= n) && (max_buses * 6 >= n)) {
            cout << min_buses << " " << max_buses << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
