#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        a[i] = p;
    }

    int res = 0;
    for (int i = 0; i < a.size();) {
        res += a[i].first * a[i].second;
        int next = 1;
        while (a[i].second <= a[i + next].second && i + next < a.size()) {
                res += a[i].second * a[i + next].first;
                next++;
        }
        i += next;
    }
    cout << res << endl;

    return 0;
}
