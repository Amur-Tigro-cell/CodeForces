#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, hello = "hello";
    cin >> s;

    int j = 0;
    for (char c : s) {
        if (c == hello[j]) {
            j++;
        }
        if (j == 5) break;
    }

    if (j == 5)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
