#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    while (b != d && b < 1e5) {
        if (b < d)
            b += a;
        else
            d += c;
    }
    //cerr << "b " << b << " d " << d << endl;
    cout << (b==d ? b : -1);

    return 0;
}
