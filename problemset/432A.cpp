#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, k, ans = 0;;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    if (n >= 3) {
        for (int i = 2; i < n; i += 3) {
            if (a[i] + k <=  5  ) {
                ans++;
            }
        }
    }
    cout << ans << endl;


    return 0;
}
