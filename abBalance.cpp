#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard the newline after reading t

    while (t--) {
        string s;
        getline(cin, s); // Read the entire line including spaces (if any)

        if (!s.empty()) {
            // s.back() is the last character, s.substr(1) is from index 1 to end
            cout << s.back() << s.substr(1) << endl;
        }
    }

    return 0;
}
