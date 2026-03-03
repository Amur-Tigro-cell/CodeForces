#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        int digit = s[i] - '0';
        int inverted = 9 - digit;

        if (i == 0 && inverted == 0) {
            // first digit cannot be 0
            cout << digit;
        } else {
            cout << min(digit, inverted);
        }
    }
    cout << "\n";
    return 0;
}
