#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int evenCount = 0, oddCount = 0;
    int evenIndex = 0, oddIndex = 0;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x % 2 == 0) {
            evenCount++;
            evenIndex = i;
        } else {
            oddCount++;
            oddIndex = i;
        }
    }

    if (evenCount == 1)
        cout << evenIndex;
    else
        cout << oddIndex;

    return 0;
}
