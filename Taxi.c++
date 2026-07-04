#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt[5] = {0};

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    int taxis = 0;

    // Groups of 4
    taxis += cnt[4];

    // Groups of 3 + Groups of 1
    taxis += cnt[3];
    cnt[1] = max(0, cnt[1] - cnt[3]);

    // Pair groups of 2
    taxis += cnt[2] / 2;
    cnt[2] %= 2;

    // One remaining group of 2
    if (cnt[2]) {
        taxis++;
        cnt[1] = max(0, cnt[1] - 2);
    }

    // Remaining groups of 1
    taxis += (cnt[1] + 3) / 4;

    cout << taxis << endl;

    return 0;
}
