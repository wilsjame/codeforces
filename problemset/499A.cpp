#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, x, t = 0;
    cin >> n >> x;
    int l[n], r[n], s = 1;
    // greedy
    for(int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
        while (s + x <= l[i]) {
            s += x;
        }
        // plus one for bounds ex) [4,6] is 3 minutes
        t += r[i] - s + 1;
        s = r[i] + 1;
    }
    cout << t;


    return 0;
}
