#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int c, v, v_mx, a, l;
    cin >> c >> v >> v_mx >> a >> l;
    int d, cnt = 0;
    for (d = 1; cnt < c; d++) {
        if (d == 1) {
            cnt += v;
            v = min(v_mx, v + a);
        }
        else {
            v -= l;
            cnt += v;
            v = min(v_mx, v + a + l);
        }
        if (cnt >= c)
            break;
    }
    cout << d;

    return 0;
}
