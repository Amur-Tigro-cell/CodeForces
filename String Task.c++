#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    string vowels = "aoyeui";

    for (char c : s) {
        c = tolower(c);
        if (vowels.find(c) == string::npos) {
            cout << "." << c;
        }
    }

    return 0;
}
