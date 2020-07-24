#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define _DEBUG

int main() {
#ifdef _DEBUG
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
#endif


    int t;
    cin >> t;

    while (t--) {
        int n, pos;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        pos = a.size() - 1;
        while (pos != 0 && a[pos] <= a[pos - 1]) {
            pos--;
        }
        while (pos != 0 && a[pos] >= a[pos - 1]) {
            pos--;
        }
        cout << pos << endl;
    }

    return 0;
}
