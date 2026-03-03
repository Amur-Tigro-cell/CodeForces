#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;

        long long blocks = k / (n-1);
        long long remainder = k % (n-1);
        long long ans;

        if(remainder == 0)
            ans = blocks * n - 1;
        else
            ans = blocks * n + remainder;

        cout << ans << "\n";
    }
    return 0;
}
