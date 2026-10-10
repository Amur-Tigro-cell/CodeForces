
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long countWays(const string& s, int parity) {
    long long dp0 = 1, dp1 = 1;
    bool first = true;

    for (int i = parity; i < (int)s.size(); i += 2) {
        if (first) {
            dp0 = (s[i] == '1' ? 0 : 1);
            dp1 = (s[i] == '0' ? 0 : 1);
            first = false;
        } else {
            long long ndp0 = (s[i] == '1' ? 0 : dp1);
            long long ndp1 = (s[i] == '0' ? 0 : dp0);

            dp0 = ndp0;
            dp1 = ndp1;
        }
    }

    return (dp0 + dp1) % MOD;
}

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    long long odd = countWays(s, 0);
    long long even = countWays(s, 1);

    cout << odd * even % MOD << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
