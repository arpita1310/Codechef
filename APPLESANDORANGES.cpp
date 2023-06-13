#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int apples, oranges;
        cin >> apples >> oranges;

        int gcd = findGCD(apples, oranges);
        cout << gcd << endl;
    }

    return 0;
}
