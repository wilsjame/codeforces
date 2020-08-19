#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        char a[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        bool greedy; // prefer 1 x 2 tiles
        int s = 0, d = 0, c = 0;
        2 * x > y ? greedy = true : greedy = false;

        for (int i = 0; i < n; i++) {
            int strk = 0;
            for (int j = 0; j < m; j++) {
                if (a[i][j] == '.') {
                    strk++;
                    s++;
                    if (strk == 2) {
                        d++;
                        s -= 2;
                        strk = 0;
                    }
                }
                else if (a[i][j] == '*') {
                    strk = 0;
                }
            }
        }
        //cerr << greedy << " " << s << " " << d << endl;
        greedy ? c = s * x + d * y : c = (s + d * 2) * x;
        cout << c << endl;
    }
        
    return 0;
}
