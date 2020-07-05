#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long res;
        long long  n, w;
        cin >> n >> w;
        if (n <= w) {
            //res = ( ((n - 1) * ( (n - 1) +1 )) / 2 ) + 1;
            res = (((n-1)*(n)) / 2) + 1;
        }
        else { // n > w
            res = (w * (w + 1)) / 2;
        }
        cout << res << endl;
    }

    return 0;
}
