#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long l;
    cin >> n >> l;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    long double max_gap = 0.0;
    for(int i = 1; i < n; i++) {
        max_gap = max(max_gap, (long double)(a[i] - a[i-1]));
    }

    long double d = max({max_gap / 2.0, (long double)a[0], (long double)(l - a[n-1])});

    cout << fixed << setprecision(10) << d << "\n";

    return 0;
}
