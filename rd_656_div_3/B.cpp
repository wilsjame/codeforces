#include <iostream>
#include <set>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        set<int> s = {};
        for (int x, i = 0; i < 2*n; i++) {
            cin >> x;
            if (s.count(x) == 0) {
                //cerr << "trace\n";
                s.insert(x);
                cout << x << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
