#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;

    map<int, int> m;
    for (int x, i = 0; i < n; ++i){
        cin >> x;
        if (m.count(x)) {
            m[x]++;
        }
        else {
            m[x] = 1;
        }
    }

    // tallest tower
    int h = 0;
    map<int, int>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++) {
        if (itr->second > h) {
            h = itr->second;
        }
    }
    cout << h << " " << m.size() << endl;

    return 0;
}
