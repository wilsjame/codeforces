#include <iostream>
using namespace std;
int main() {
    int n, ans = 0;
    cin >> n;

    if (n == 1) {
        ans = 1;
    }
    else {
        for (int i = 0; i + 1 < n; i++) {
            ans += 2 * (2 * i + 1);
        }
        ans += 2 * (n - 1) + 1;
    }
    cout << ans << endl;

    return 0;
}
