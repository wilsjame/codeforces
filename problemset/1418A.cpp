#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k, s = 1;
        cin >> x >> y >> k;
        long long trades = 0;
        // need k coals
        // k * y sticks
        // need k sticks
        // (k * y) + k sticks
        while (s < y * k + k) {
            s += x;
            s--;
            cerr << s << " ";
            trades++;
        }
        cout << trades;

    }
    return 0;
}
