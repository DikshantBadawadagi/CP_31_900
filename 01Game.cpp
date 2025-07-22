#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int count0 = count(s.begin(), s.end(), '0');
        int count1 = count(s.begin(), s.end(), '1');

        if (min(count0, count1) % 2 == 1)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    }
    return 0;
}
