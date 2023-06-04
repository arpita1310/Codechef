#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        int remaining = 0;
        bool possible = true;
        for (int j = 0; j < n; j++) {
            if (a[j] + remaining >= k) {
                remaining += a[j] - k;
            } else {
                possible = false;
                cout << "NO " << j + 1 << endl;
                break;
            }
        }
        if (possible) {
            cout << "YES" << endl;
        }
    }
    return 0;
}
