#include <iostream>
using namespace std;
int main() {
    int a, b, c, max = 0;
    cin >> a >> b >> c;

    for (int day = 0; day < 7; day++){
        int curr = day, local_a = a, local_b = b, local_c = c, local_max = 0;

        while (1) {
            if (curr == 0 || curr == 3 || curr == 6) {
                if (local_a-- == 0) break;
            }
            else if (curr == 1 || curr == 5) {
                if (local_b-- == 0) break;
            }
            else if (curr == 2 || curr == 4) {
                if (local_c-- == 0) break;
            }
            curr == 6 ? curr = 0 : curr++;
            local_max++;
        }

        if (local_max > max) {
            max = local_max;
        }

    }
    cout << max << endl;

    return 0;
}
