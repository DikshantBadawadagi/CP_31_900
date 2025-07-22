#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool canFormPalindrome(string& s, int k) {
    vector<int> freq(26, 0);
    for (char c : s)
        freq[c - 'a']++;

    int odd_count = 0;
    for (int f : freq)
        if (f % 2 != 0)
            odd_count++;

    int remaining_length = s.size() - k;

    // To form a palindrome, at most one character can have an odd count (if length is odd), none if even
    int max_odd_allowed = remaining_length % 2;

    // We need to remove at least (odd_count - max_odd_allowed) odd characters to make it valid
    int min_deletions_needed = max(0, odd_count - max_odd_allowed);

    return k >= min_deletions_needed && k <= s.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        if (canFormPalindrome(s, k))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
