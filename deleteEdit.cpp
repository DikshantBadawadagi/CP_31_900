#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s, t;
        cin >> s >> t;
        int n = s.length(), m = t.length();
        vector<int> freq(26, 0);
        for(int i = 0; i < m; i++) {
            freq[t[i] - 'A']++;  // Assuming uppercase
        }
        for(int i = n - 1; i >= 0; i--) {
            if(freq[s[i] - 'A'] > 0) {
                freq[s[i] - 'A']--;
            } else {
                s[i] = '.';
            }
        }
        int j = 0;
        bool ok = true;
        for(int i = 0; i < n; i++) {
            if(j < m && s[i] != '.' && t[j] != s[i]) {
                ok = false;
                break;
            } else if(s[i] != '.') {
                j++;
            }
        }
        if(ok && j == m) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
