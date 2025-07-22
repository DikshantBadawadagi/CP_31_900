#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        
        vector<long long> a(n);
        long long total_sum = 0;
        long long max_beauty = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_sum += a[i];
            // ceil(ai / x) = (ai + x - 1) / x in integer math
            max_beauty += (a[i] + x - 1) / x;
        }
        
        long long min_beauty = (total_sum + x - 1) / x;

        cout << min_beauty << " " << max_beauty << '\n';
    }
    return 0;
}
