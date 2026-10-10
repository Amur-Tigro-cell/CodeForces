#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> nums;

    for (char c : s) {
        if (c != '+') {
            nums.push_back(c);
        }
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < (int)nums.size(); i++) {
        if (i > 0) cout << "+";
        cout << nums[i];
    }

    cout << '\n';

    return 0;
}
