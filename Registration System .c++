#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> mp;

    while (n--) {
        string s;
        cin >> s;

        if (mp.find(s) == mp.end()) {
            cout << "OK\n";
            mp[s] = 1;
        } else {
            string t = s + to_string(mp[s]);
            cout << t << "\n";
            mp[s]++;
            mp[t] = 1;
        }
    }

    return 0;
}
