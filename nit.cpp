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
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Check if the entire array is already 0
        bool all_zero = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] != 0) {
                all_zero = false;
                break;
            }
        }

        if (all_zero) {
            cout << 0 << '\n';
            continue;
        }

        // Find the first and last non-zero element
        int left = 0, right = n - 1;
        while (left < n && a[left] == 0) ++left;
        while (right >= 0 && a[right] == 0) --right;

        // Check if all elements between left and right are non-zero
        bool all_non_zero = true;
        for (int i = left; i <= right; ++i) {
            if (a[i] == 0) {
                all_non_zero = false;
                break;
            }
        }

        if (all_non_zero) {
            cout << 1 << '\n';
        } else {
            cout << 2 << '\n';
        }
    }

    return 0;
}
