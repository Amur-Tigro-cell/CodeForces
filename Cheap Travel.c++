#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int fullTickets = n / m;
    int remainingRides = n % m;

    int costMix = fullTickets * b + min(remainingRides * a, b);
    int costAllSpecial = ((n + m - 1) / m) * b;
    int costAllSingle = n * a;

    int totalCost = min({costMix, costAllSpecial, costAllSingle});

    cout << totalCost << "\n";
}
