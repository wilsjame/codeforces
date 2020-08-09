#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a.resize(unique(a.begin(), a.end()) - a.begin());

    map<int, int> m;
    vector<int> b = a;
    sort(b.begin(), b.end());
    b.resize(unique(b.begin(), b.end()) - b.begin());
    for (auto x : b) {
        m[x]++;
    }

    // walk backwards <-
    int ans;
    for (int i = a.size() - 1; i >= 0; --i) {
        m.erase(a[i]);
        if (m.empty()) {
            ans = a[i];
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
