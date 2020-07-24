#include <iostream>
#include <vector>
using namespace std;

int max(int m, int n) {
    if (m == n) return m;
    else if (m > n) return m;
    else return n;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        vector<int> v(3);
        v[0] = x; v[1] = y; v[2] = z;

        int a, b, c;
        bool flag = false;
        for (int i = 0; i < 3 && flag == false; i++) {
            for (int j = 0; j < 3 && flag == false; j++) {
                for (int k = 0; k < 3 && flag == false; k++) {
                    a = v[i], b = v[j], c = v[k];
                    if (max(a, b) == x && max(a, c) == y && max(b, c) == z) {
                        flag = true;
                    }
                } 
            }
        }
        if (flag) {
            cout << "YES\n" << a << " " << b << " " << c << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
