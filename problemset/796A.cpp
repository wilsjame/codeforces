#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> A(n);
    for (auto &a : A) 
        cin >> a;

    int ans = 105;
    // ignore houses
    for (int i = 0; i < n; i++) 
        if (A[i] > k)
            A[i] = 0;
    // houses to the right
    for (int d = 0, i = m - 1; i < n; i++, d++) {
        if (A[i] > 0) {
            ans = d;
            break;
        }
    }
    // houses to the left
    for (int d = 0, i = m - 1; i >= 0; i--, d++) {
        if (A[i] > 0) {
            ans = min(ans, d);
            break;
        }
    }
    cout << ans * 10;

    return 0;
}
